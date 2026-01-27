/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 11:00:43 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/01/26 07:41:57 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*find_min(t_list *stack)
{
	t_list	*min;

	min = stack;
	while (stack)
	{
		if (stack->content < min->content)
			min = stack;
		stack = stack->next;
	}
	return (min);
}

int	find_index(t_list *stack, int value)
{
	int	index;

	index = 0;
	while (stack)
	{
		if (stack->content == value)
			return (index);
		index++;
		stack = stack->next;
	}
	return (-1);
}

void	make_top(t_list **stack, int index)
{
	int	size;
	int	i;

	size = (ft_lstsize(*stack) / 2);
	if (index <= size)
	{
		i = 0;
		while (i < index)
		{
			ra(stack);
			i++;
		}
	}
	else
	{
		i = 0;
		while (i < (ft_lstsize(*stack) - index))
		{
			rra(stack);
			i++;
		}
	}
}
