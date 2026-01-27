/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:36:50 by yikoubaz          #+#    #+#             */
/*   Updated: 2025/10/24 15:00:00 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*my_tmp;

	my_tmp = (unsigned char *)s;
	while (n-- > 0)
		*(my_tmp++) = (unsigned char)c;
	return (s);
}
