/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 08:47:51 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/01/26 06:45:40 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_list **head)
{
	t_list	*ptr_1;
	t_list	*ptr_2;

	if (!head || !*head || !(*head)->next)
		return ;
	ptr_1 = *head;
	ptr_2 = ptr_1->next;
	ptr_1->next = ptr_2->next;
	ptr_2->next = ptr_1;
	*head = ptr_2;
}

void	sa(t_list **stack_a)
{
	ft_swap(stack_a);
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_list **stack_b)
{
	ft_swap(stack_b);
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
	ft_putstr_fd("ss\n", 1);
}
