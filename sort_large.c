/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 11:30:44 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/01/26 07:30:37 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}

t_list	*ft_get_cheapest(t_list *b)
{
	t_list	*cheapest;
	int		min_cost;
	int		cost;

	cheapest = b;
	min_cost = ft_abs(b->cost_a) + ft_abs(b->cost_b);
	b = b->next;
	while (b)
	{
		cost = ft_abs(b->cost_a) + ft_abs(b->cost_b);
		if (cost < min_cost)
		{
			min_cost = cost;
			cheapest = b;
		}
		b = b->next;
	}
	return (cheapest);
}

void	ft_sort_large(t_list **a, t_list **b)
{
	int	size;
	int	mid;

	size = ft_lstsize(*a);
	mid = size / 2;
	ft_index_stack(a);
	while (ft_lstsize(*a) > 3)
	{
		pb(a, b);
		if ((*b)->index < mid)
			rb(b);
	}
	sort_three(a);
	while (*b)
	{
		ft_set_pos(*a);
		ft_set_pos(*b);
		ft_set_target_pos(*a, *b);
		ft_set_costs(*a, *b);
		ft_excute_all(a, b);
	}
	ft_final_rotation(a);
}
