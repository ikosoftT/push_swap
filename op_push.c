/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 09:37:53 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/01/26 06:38:41 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_list **src, t_list **dest)
{
	t_list	*tmp;

	tmp = *src;
	*src = tmp->next;
	tmp->next = *dest;
	*dest = tmp;
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	ft_push(stack_a, stack_b);
	ft_putstr_fd("pb\n", 1);
}

void	pa(t_list **stack_b, t_list **stack_a)
{
	ft_push(stack_b, stack_a);
	ft_putstr_fd("pa\n", 1);
}
