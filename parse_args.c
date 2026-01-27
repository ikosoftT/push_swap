/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 22:50:59 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/01/26 06:51:15 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**parse_args(int argc, char **argv)
{
	char	**spl;
	char	*one_str;
	int		j;

	if (!check_empty(argc, argv))
		ft_err_exit();
	one_str = join_all(argc, argv);
	spl = ft_split(one_str, ' ');
	if (!spl || !*spl)
	{
		free(one_str);
		free_list(spl);
	}
	free(one_str);
	j = -1;
	while (spl[++j])
	{
		if (!is_valid(spl[j]))
		{
			free_list(spl);
			ft_err_exit();
		}
	}
	return (spl);
}
