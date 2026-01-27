/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 11:04:44 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/01/26 09:21:43 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_dup(t_list *top)
{
	t_list	*next;

	while (top)
	{
		next = top->next;
		while (next)
		{
			if (top->content == next->content)
				return (0);
			next = next->next;
		}
		top = top->next;
	}
	return (1);
}

void	clear_stack(t_list **top)
{
	t_list	*tmp;

	while (*top)
	{
		tmp = (*top)->next;
		free(*top);
		*top = tmp;
	}
}

int	is_sorted(t_list **stack)
{
	t_list	*i;
	t_list	*j;

	i = *stack;
	while (i->next)
	{
		j = i->next;
		if (i->content > j->content)
			return (0);
		i = i->next;
	}
	return (1);
}
