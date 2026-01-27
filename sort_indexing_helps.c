/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_indexing_helps.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 02:23:01 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/01/26 07:26:37 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_copy_to_arr(t_list *stack)
{
	t_list	*tmp;
	int		*arr;
	int		size;
	int		k;

	size = ft_lstsize(stack);
	arr = malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);
	tmp = stack;
	k = 0;
	while (tmp)
	{
		arr[k++] = tmp->content;
		tmp = tmp->next;
	}
	return (arr);
}

int	*ft_sort_arr(int *arr, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (arr);
}

void	ft_assign_index_to_each_node(int *sorted_arr, int size, t_list **stack)
{
	t_list	*tmp;
	int		i;

	tmp = *stack;
	while (tmp)
	{
		i = 0;
		while (i < size)
		{
			if (tmp->content == sorted_arr[i])
			{
				tmp->index = i;
				break ;
			}
			i++;
		}
		tmp = tmp->next;
	}
}

void	ft_index_stack(t_list **a)
{
	int	*arr;
	int	size;

	size = ft_lstsize(*a);
	arr = ft_copy_to_arr(*a);
	ft_sort_arr(arr, size);
	ft_assign_index_to_each_node(arr, size, a);
	free(arr);
}
