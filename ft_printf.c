/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpapyan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:50:31 by rpapyan           #+#    #+#             */
/*   Updated: 2022/07/31 14:50:35 by rpapyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	va_list	ptr;

	i = 0;
	len = 0;
	va_start (ptr, format);
	while (format[i])
	{
		if (format[i] != '%')
			len += write(1, &format[i], 1);
		if (format[i] == '%')
		{
			len += ft_handler(format[i + 1], &ptr);
			i++;
		}
		i++;
	}
	va_end(ptr);
	return (len);
}

int	print_char(char c)
{
	int	len;

	len = write(1, &c, 1);
	return (len);
}

int	print_number(int number)
{
	char	*str;
	int		len;
	int		i;

	i = 0;
	len = 0;
	str = ft_itoa(number);
	while (str[i])
	{
		len += write(1, &str[i], 1);
		i++;
	}
	free(str);
	return (len);
}

int	ft_digit_counter(unsigned long long nb, int base)
{
	size_t	i;

	i = 0;
	while (nb)
	{
		nb /= base;
		i++;
	}
	return (i);
}

int	ft_handler(char c, va_list *ptr)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += print_char(va_arg(*ptr, int));
	if (c == 's')
		len += print_str(va_arg(*ptr, char *));
	if (c == '%')
		len += write(1, "%", 1);
	if (c == 'p')
		len += print_ptr(va_arg(*ptr, unsigned long long));
	if (c == 'd')
		len += print_number(va_arg(*ptr, int));
	if (c == 'i')
		len += print_number(va_arg(*ptr, int));
	if (c == 'u')
		len += print_unsigned(va_arg(*ptr, unsigned int));
	if (c == 'x')
		len += ft_print_hex(va_arg(*ptr, unsigned int), 0);
	if (c == 'X')
		len += ft_print_hex(va_arg(*ptr, unsigned int), 1);
	return (len);
}
