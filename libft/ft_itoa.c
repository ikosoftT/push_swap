/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 16:40:07 by yikoubaz          #+#    #+#             */
/*   Updated: 2025/10/27 04:22:52 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digits(int n)
{
	int	counter;

	counter = 0;
	while (n)
	{
		counter++;
		n /= 10;
	}
	return (counter);
}

static int	ft_fill(char *s, int i, long u_nmbr)
{
	i--;
	while (i >= 0 && u_nmbr != 0)
	{
		s[i] = (u_nmbr % 10) + 48;
		u_nmbr /= 10;
		i--;
	}
	return (i);
}

static char	*handl_zero(char *c)
{
	c = malloc(2);
	if (!c)
		return (NULL);
	c[0] = 48;
	c[1] = 0;
	return (c);
}

static int	ft_check(long *big)
{
	if (*big < 0)
	{
		*big = -(*big);
		return (1);
	}
	return (0);
}

char	*ft_itoa(int n)
{
	long	big;
	int		s;
	int		d_count;
	int		i;
	char	*c;

	c = NULL;
	if (n == 0)
		return (handl_zero(c));
	big = n;
	s = 0;
	d_count = 0;
	s = ft_check(&big);
	d_count = ft_count_digits(big);
	c = (char *)malloc((d_count + s + 1) * sizeof(char));
	if (!c)
		return (NULL);
	i = (d_count + s);
	i = ft_fill(c, i, big);
	if (s)
		c[i] = '-';
	c[d_count + s] = '\0';
	return (c);
}
