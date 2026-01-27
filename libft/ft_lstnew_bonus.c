/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 16:50:52 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/01/26 07:51:46 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(long content)
{
	t_list	*my;

	my = malloc(sizeof(t_list));
	if (!my)
		return (NULL);
	my -> content = content;
	my -> next = NULL;
	return (my);
}
