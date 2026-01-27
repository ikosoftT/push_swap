/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:44:06 by yikoubaz          #+#    #+#             */
/*   Updated: 2025/10/30 15:59:35 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_set(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static char	*check(const char *s1, const char *set)
{
	if (!s1 || !set)
		return (NULL);
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	str;
	size_t	end;
	size_t	i;
	char	*new;

	if (!s1 || !set || (ft_strlen(s1) == 0))
		return (check(s1, set));
	str = 0;
	end = ft_strlen(s1);
	end--;
	while (s1[str] && ft_is_set(s1[str], set))
		str++;
	while (end > str && ft_is_set(s1[end], set))
		end--;
	if (str > end)
		return (ft_strdup(""));
	new = malloc((end - str + 2) * sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	while (str <= end)
		new[i++] = s1[str++];
	new[i] = '\0';
	return (new);
}
