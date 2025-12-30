/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 14:53:55 by yikoubaz          #+#    #+#             */
/*   Updated: 2025/12/30 18:40:48 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_node	*a;
	t_node	*b;

	a = NULL;
	b = NULL;
	if (ac < 2)
		return (0);
	parse_args(ac, av , &a);
	if (is_sorted(a))
		return (free_stack(&a), 0);
	index_stack(a);
	if (stack_size(a) <= 5)
		sort_small(&a, &b);
	else
		sort_big(&a, &b);
	free_stack(&a);
	return (0);
}

