/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpapyan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 17:16:13 by rpapyan           #+#    #+#             */
/*   Updated: 2022/07/29 17:32:04 by rpapyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "./libft/libft.h"
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_handler(char c, va_list *ptr);
int		print_char(char c);
int		print_str(char *str);
int		print_ptr(unsigned long long ptr);
char	*ft_ull_base(unsigned long long nb, int base);
int		ft_digit_counter(unsigned long long nb, int base);
int		print_number(int number);
int		print_unsigned(unsigned int number);
int		ft_print_hex(unsigned int nb, int i);

#endif
