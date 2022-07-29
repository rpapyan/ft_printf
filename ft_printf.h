/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpapyan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 17:16:13 by rpapyan           #+#    #+#             */
/*   Updated: 2022/07/21 21:29:33 by rpapyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>

# include "./libft/libft.h"
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_checker(char c, va_list *ptr);
int		ft_print_hex(unsigned int nb, int i);
int		ft_printf(const char *format, ...);
int		ft_handler(char c, va_list *ptr);
int		print_char(char c);
int		print_str(char *str);
int		print_ptr(unsigned long long ptr);
int		print_number(int number);
int		print_unsigned(unsigned int number);
size_t	ft_digit_count(unsigned long nb);
char	*ft_ull_base(unsigned long long nb, int base);
int		ft_digit_counter(unsigned long long nb, int base);

#endif
