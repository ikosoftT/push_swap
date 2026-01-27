/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:08:05 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/01/26 06:37:19 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_stack(t_list **top, long value, char **spl)
{
	if (value > INT_MAX || value < INT_MIN)
	{
		clear_stack(top);
		free_list(spl);
		ft_err_exit();
	}
	ft_lstadd_back(top, ft_lstnew(value));
}
