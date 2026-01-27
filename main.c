/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:09:55 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/01/26 08:24:07 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (argc > 1)
	{
		stack_a = parse_logic(argc, argv);
		stack_b = NULL;
		if (is_sorted(&stack_a))
		{
			clear_stack(&stack_a);
			return (0);
		}
		else if (ft_lstsize(stack_a) == 2)
			sort_two(&stack_a);
		else if (ft_lstsize(stack_a) == 3)
			sort_three(&stack_a);
		else if (ft_lstsize(stack_a) == 4 || ft_lstsize(stack_a) == 5)
			sort_five(&stack_a, &stack_b);
		else
			ft_sort_large(&stack_a, &stack_b);
		clear_stack(&stack_a);
		clear_stack(&stack_b);
	}
	return (0);
}
