/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 05:59:17 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/01/26 07:52:02 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static int	ft_alloc_word(char **strs, size_t idx, size_t len)
{
	size_t	i;

	strs[idx] = malloc(len + 1);
	if (!strs[idx])
	{
		i = 0;
		while (i < idx)
		{
			free(strs[i]);
			i++;
		}
		free(strs);
		return (1);
	}
	return (0);
}

static int	ft_fill(char **strs, char const *s, char c)
{
	size_t	len;
	size_t	idx;

	idx = 0;
	while (*s)
	{
		len = 0;
		while (*s && *s == c)
			s++;
		while (s[len] && s[len] != c)
			len++;
		if (len)
		{
			if (ft_alloc_word(strs, idx, len))
				return (1);
			ft_strlcpy(strs[idx], s, len + 1);
			idx++;
			s += len;
		}
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**strs;

	if (!*s || !s)
		return (NULL);
	words = ft_count_words(s, c);
	strs = malloc((words + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	if (ft_fill(strs, s, c))
		return (NULL);
	strs[words] = NULL;
	return (strs);
}
