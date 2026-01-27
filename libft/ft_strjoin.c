/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 21:56:01 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/01/17 10:16:17 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new_str;
	size_t	bytes;
	size_t	i;
	size_t	j;

	bytes = (ft_strlen(s1) + ft_strlen(s2) + 1);
	new_str = (char *)malloc(bytes * sizeof(char));
	if (!new_str)
		return (NULL);
	i = 0;
	while (i < (ft_strlen(s1)))
	{
		new_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < (ft_strlen(s2)))
	{
		new_str[i + j] = s2[j];
		j++;
	}
	new_str[bytes - 1] = '\0';
	return (new_str);
}
