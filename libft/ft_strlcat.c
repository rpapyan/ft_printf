/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpapyan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 05:45:26 by rpapyan           #+#    #+#             */
/*   Updated: 2022/04/17 02:19:10 by rpapyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	j = 0;
	if (!dst || !src)
		return (0);
	dst_len = ft_strlen(dst);
	i = dst_len;
	if (dstsize == 0)
		return (ft_strlen(src));
	src_len = ft_strlen(src);
	if (dstsize < dst_len)
		return (dstsize + src_len);
	while (src[j] && (dst_len + j) < dstsize)
		dst[i++] = src[j++];
	if ((dst_len + j) == dstsize && dst_len < dstsize)
		dst[--i] = '\0';
	else
		dst[i] = '\0';
	return (src_len + dst_len);
}
