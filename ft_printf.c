/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpapyan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 01:04:59 by rpapyan           #+#    #+#             */
/*   Updated: 2022/06/12 04:45:01 by rpapyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
	printf("printf:");	
	printf("			ft_printf:\n");	
	
	printf("%%c: %c%c", 'a', 'b');
	ft_printf("			%%c: %c%c\n", 'a', 'b');
	
	printf("%%s: %s", "string");
	printf("		%%s: %s\n", "string");
	
	printf("%%p: %p", "");
	printf("		%%p: %p\n", "");
	
	printf("%%d: %d", 0xFF);
	printf("			%%d: %d\n", 0xFF);
	
	printf("%%i: %i", 0xFF);
	printf("			%%i: %i\n", 0xFF);
	
	printf("%%u: %u", 10);
	printf("			%%u: %u\n", 10);
	
	printf("%%x: %x", 255);
	printf("			%%x: %x\n", 255);
	
	printf("%%X: %X", 255);
	printf("			%%X: %X\n", 255);
	
	printf("%%%%: %%");
	printf("			%%%%: %%\n");
	return (0);
}

int    ft_printf(const char *format, ...)
{
	int	i;
	int len;
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
	return (len);
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
	return (len);
}
