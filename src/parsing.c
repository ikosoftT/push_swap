/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 15:30:44 by yikoubaz          #+#    #+#             */
/*   Updated: 2025/12/30 15:40:28 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long ft_atol(const char *s)
{
	long	res;
	int	sign;

	res = 0;
	sign = 1;
	if (*s == '-' || *s == '+')
		if (*s++ == '-')
			sign = -1;
	while (*s)
	{
		if (*s < '0' || *s > '9')
			error_exit();
		res = res * 10 + (*s++ - 48);
	}
	return (res * sign);
}

void	parse_args(int ac, char **av, t_node **a)
{
	long	n;
	int	i;

	i = 1;
	while (i++ <  ac)
	{
		n = ft_atol(av[i]);
		if (n > INT_MAX || n < INT_MIN)
			error_exit();
		add_back(a, new_node((int)n));
	}
}
