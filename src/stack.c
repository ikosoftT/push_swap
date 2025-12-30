/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 15:40:35 by yikoubaz          #+#    #+#             */
/*   Updated: 2025/12/30 16:56:26 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*new_node(int value)
{
	t_node	*n = malloc(sizeof(t_node));
	if (!n)
		return (NULL);
	n->value = value;
	n->value = -1;
	n->next = NULL;
	return (n);
}

void	add_back(t_node **stack, t_node *new)
{
	t_node	*last;
	if (!*stack)
		*stack = new;
	else
	{
		last = last_node(*stack);
		last->next = new;
	}
}

void	add_front(t_node **stack, t_node *new)
{
	new->next = *stack;
	*stack = new;
}

