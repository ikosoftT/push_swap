/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:06:17 by yikoubaz          #+#    #+#             */
/*   Updated: 2025/10/24 14:59:55 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	big;

	big = n;
	if (big < 0)
	{
		big = -big;
		ft_putchar_fd('-', fd);
	}
	if (big >= 10)
		ft_putnbr_fd(big / 10, fd);
	ft_putchar_fd((big % 10) + 48, fd);
}
