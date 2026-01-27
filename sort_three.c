/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 13:33:57 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/01/26 07:45:25 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_list **stack)
{
	t_list	*a;
	t_list	*b;
	t_list	*c;

	a = *stack;
	b = a->next;
	c = b->next;
	if (b->content < a->content && a->content < c->content)
		sa(stack);
	else if (c->content < b->content && b->content < a->content)
	{
		sa(stack);
		rra(stack);
	}
	else if (a->content < c->content && c->content < b->content)
	{
		rra(stack);
		sa(stack);
	}
	else if (b->content < c->content && c->content < a->content)
		ra(stack);
	else if (c->content < a->content && a->content < b->content)
		rra(stack);
}
