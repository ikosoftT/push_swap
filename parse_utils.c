/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:52:50 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/01/26 07:14:34 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_err_exit(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

int	is_valid(char *arg)
{
	int	i;

	i = 0;
	while (arg[i] == 32)
		i++;
	if (arg[i] == '+' || arg[i] == '-')
		i++;
	if (!ft_isdigit(arg[i]))
		return (0);
	while (arg[i])
	{
		if (!ft_isdigit(arg[i]))
			return (0);
		i++;
	}
	return (1);
}

char	*join_all(int argc, char **argv)
{
	char	*tmp;
	char	*joined;
	int		i;

	joined = ft_strdup("");
	if (!joined)
		ft_err_exit();
	i = 0;
	while (++i < argc)
	{
		tmp = joined;
		joined = ft_strjoin(tmp, argv[i]);
		if (!joined)
			ft_err_exit();
		free(tmp);
		if (i + 1 < argc)
		{
			tmp = joined;
			joined = ft_strjoin(tmp, " ");
			if (!joined)
				ft_err_exit();
			free(tmp);
		}
	}
	return (joined);
}

int	check_empty(int argc, char **argv)
{
	char	**spl;
	int		i;

	i = 1;
	while (i < argc)
	{
		spl = ft_split(argv[i], ' ');
		if (!spl || !spl[0])
		{
			free_list(spl);
			return (0);
		}
		free_list(spl);
		i++;
	}
	return (1);
}

void	free_list(char **spl)
{
	int	p;

	if (!spl)
		return ;
	p = 0;
	while (spl[p])
		free(spl[p++]);
	free(spl);
}
