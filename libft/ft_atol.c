/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 19:56:33 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/01/26 09:20:14 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_itsspace(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

long	ft_atol(const char *nptr)
{
	int				s;
	long			cv;

	s = 1;
	cv = 0;
	while (ft_itsspace(*nptr))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			s = -s;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		cv = (cv * 10) + (*nptr - 48);
		nptr++;
	}
	return (cv * s);
}
