/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 11:16:45 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/01/26 07:20:52 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(t_list **stack_a, t_list **stack_b)
{
	t_list	*min;
	int		index;

	if (!stack_a || !(*stack_a) || !(*stack_a)->next)
		return ;
	while (ft_lstsize(*stack_a) > 3)
	{
		min = find_min(*stack_a);
		index = find_index(*stack_a, min->content);
		make_top(stack_a, index);
		pb(stack_a, stack_b);
	}
	sort_three(stack_a);
	while (ft_lstsize(*stack_b) > 0)
		pa(stack_b, stack_a);
}
