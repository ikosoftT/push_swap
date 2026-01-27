/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   costs_helps.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 02:53:37 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/01/26 06:35:52 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_set_pos(t_list *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		stack->pos = i;
		i++;
		stack = stack->next;
	}
}

int	ft_get_min_pos(t_list *stack)
{
	int	min_index;
	int	min_pos;

	min_index = INT_MAX;
	min_pos = 0;
	while (stack)
	{
		if (stack->index < min_index)
		{
			min_index = stack->index;
			min_pos = stack->pos;
		}
		stack = stack->next;
	}
	return (min_pos);
}

void	ft_set_target_pos(t_list *a, t_list *b)
{
	t_list	*tmp_a;
	t_list	*tmp_b;
	int		best_pos;
	int		best_index;

	tmp_b = b;
	while (tmp_b)
	{
		best_index = INT_MAX;
		tmp_a = a;
		while (tmp_a)
		{
			if (tmp_a->index > tmp_b->index && tmp_a->index < best_index)
			{
				best_index = tmp_a->index;
				best_pos = tmp_a->pos;
			}
			tmp_a = tmp_a->next;
		}
		if (best_index == INT_MAX)
			tmp_b->target_pos = ft_get_min_pos(a);
		else
			tmp_b->target_pos = best_pos;
		tmp_b = tmp_b->next;
	}
}

void	ft_set_costs(t_list *a, t_list *b)
{
	int	size_a;
	int	size_b;

	size_a = ft_lstsize(a);
	size_b = ft_lstsize(b);
	while (b)
	{
		if (b->target_pos <= size_a / 2)
			b->cost_a = b->target_pos;
		else
			b->cost_a = b->target_pos - size_a;
		if (b->pos <= size_b / 2)
			b->cost_b = b->pos;
		else
			b->cost_b = b->pos - size_b;
		b = b->next;
	}
}
