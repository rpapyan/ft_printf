/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpapyan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 19:02:26 by rpapyan           #+#    #+#             */
/*   Updated: 2022/03/27 12:52:21 by rpapyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	nbr;
	size_t	i;
	size_t	neg;

	nbr = 0;
	i = 0;
	while (nptr[i] != '\0' && (nptr[i] == 32 || nptr[i] == '\t'
			|| nptr[i] == '\v'
			|| nptr[i] == '\n' || nptr[i] == '\f' || nptr[i] == '\r'))
		i++;
	if (nptr[i] != '\0' && nptr[i] == '-')
	{
		neg = 1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] != '\0' && ft_isdigit(nptr[i]))
		nbr = (nbr * 10) + (nptr[i++] - 48);
	if (neg == 1)
		return (-nbr);
	return (nbr);
}
