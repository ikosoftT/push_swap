/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_rotate_helpers.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 02:49:58 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/01/26 07:36:17 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_both(t_list **a, t_list **b, int *ca, int *cb)
{
	while (*ca > 0 && *cb > 0)
	{
		rr(a, b);
		(*ca)--;
		(*cb)--;
	}
	while (*ca < 0 && *cb < 0)
	{
		rrr(a, b);
		(*ca)++;
		(*cb)++;
	}
}

void	ft_rotate_a(t_list **a, int *ca)
{
	while (*ca > 0)
	{
		ra(a);
		(*ca)--;
	}
	while (*ca < 0)
	{
		rra(a);
		(*ca)++;
	}
}

void	ft_rotate_b(t_list **b, int *cb)
{
	while (*cb > 0)
	{
		rb(b);
		(*cb)--;
	}
	while (*cb < 0)
	{
		rrb(b);
		(*cb)++;
	}
}

void	ft_excute_all(t_list **a, t_list **b)
{
	t_list	*node;
	int		ca;
	int		cb;

	node = ft_get_cheapest(*b);
	ca = node->cost_a;
	cb = node->cost_b;
	ft_rotate_both(a, b, &ca, &cb);
	ft_rotate_a(a, &ca);
	ft_rotate_b(b, &cb);
	pa(b, a);
}

void	ft_final_rotation(t_list **a)
{
	int	min_pos;

	ft_set_pos(*a);
	min_pos = ft_get_min_pos(*a);
	if (min_pos <= ft_lstsize(*a) / 2)
	{
		while (min_pos-- > 0)
			ra(a);
	}
	else
	{
		while (min_pos++ < ft_lstsize(*a))
			rra(a);
	}
}
