/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpapyan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 22:52:54 by rpapyan           #+#    #+#             */
/*   Updated: 2022/05/22 20:08:40 by rpapyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(const char *c);
void	ft_bzero(void *s, size_t n);
int		ft_tolower(int c);
void	*ft_calloc(size_t count, size_t size);
char	*ft_itoa(int n);

#endif
