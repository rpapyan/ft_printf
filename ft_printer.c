/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpapyan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 02:21:15 by rpapyan           #+#    #+#             */
/*   Updated: 2022/06/07 23:50:19 by rpapyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(char c)
{
	int	len;

	len = write(1, &c, 1);
	return (len);
}

int	print_str(char *str)
{
	int	len;

	len = 0;
	while(*str)
		len += write(1, str++, 1);
	return (len);
}
