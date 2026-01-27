/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_two.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 09:29:16 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/01/26 07:46:47 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_list **stack)
{
	t_list	*a;
	t_list	*b;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	a = *stack;
	b = a->next;
	if (a->content > b->content)
		sa(stack);
	else
		return ;
}
