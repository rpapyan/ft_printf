/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpapyan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 02:21:15 by rpapyan           #+#    #+#             */
/*   Updated: 2022/07/21 21:14:58 by rpapyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_str(char *str)
{
	int	len;

	if (!str)
	{
		len = write(1, "(null)", 6);
		return (len);
	}
	len = 0;
	while (*str)
		len += write(1, str++, 1);
	return (len);
}

int	print_ptr(unsigned long long ptr)
{
	int		len;
	int		i;
	char	*str;

	i = 0;
	len = 0;
	if (ptr)
		len = write(1, "0x", 2);
	str = ft_ull_base(ptr, 16);
	while (*str)
	{
		*str = ft_tolower(*str);
		len += write(1, str++, 1);
	}
	return (len);
}

char	*ft_ull_base(unsigned long long nb, int base)
{
	char				*str;
	char				*rtn;
	size_t				count;

	count = ft_digit_counter(nb, base);
	str = 0;
	str = malloc(sizeof(char) * (count + 1));
	if (!(str))
		return (0);
	str[count] = '\0';
	while (nb)
	{
		if ((nb % base) < 10)
			str[count - 1] = (nb % base) + 48;
		else
			str[count - 1] = (nb % base) + 55;
		nb /= base;
		count--;
	}	
	rtn = str;
	free(str);
	return (rtn);
}

int	ft_print_hex(unsigned int nb, int i)
{
	int	len;

	len = 0;
	if (nb >= 16)
	{
		len += ft_print_hex(nb / 16, i);
		len += ft_print_hex(nb % 16, i);
	}
	if (nb < 16)
	{
		if (nb < 10)
			len += print_char(nb + 48);
		else
		{
			if (i == 1)
				len += print_char(nb + 55);
			else
				len += print_char(nb + 87);
		}
	}
	else
		nb = nb % 16;
	return (len);
}

int	print_unsigned(unsigned int number)
{
	int	len;

	len = 0;
	if (number >= 10)
	{
		len += print_unsigned(number / 10);
		len += print_unsigned(number % 10);
	}
	if (number < 10)
		len += print_char(number + 48);
	return (len);
}
