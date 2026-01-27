/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 21:41:04 by yikoubaz          #+#    #+#             */
/*   Updated: 2025/10/29 23:37:52 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	i;
	char	*sub_loc;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if ((start + len) >= s_len)
		len = s_len - start;
	sub_loc = malloc((len + 1) * sizeof(char));
	if (!sub_loc)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
	{
		sub_loc[i] = s[start + i];
		i++;
	}
	sub_loc[i] = 0;
	return (sub_loc);
}
