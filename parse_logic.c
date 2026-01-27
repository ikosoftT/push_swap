/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_logic.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 18:32:55 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/01/27 08:04:32 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*parse_logic(int argc, char **argv)
{
	t_list	*top;
	char	**spl;
	int		k;

	top = NULL;
	spl = parse_args(argc, argv);
	if (!spl)
	{
		free_list(spl);
		ft_err_exit();
	}
	k = 0;
	while (spl[k])
		create_stack(&top, ft_atol(spl[k++]), spl);
	if (!check_dup(top))
	{
		free_list(spl);
		clear_stack(&top);
		ft_err_exit();
	}
	free_list(spl);
	return (top);
}
