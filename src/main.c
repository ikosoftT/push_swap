/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 10:32:11 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/01/09 10:55:02 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../includes/push_swap.h" Fixing...
#include <stdio.h>
#include "../libft/libft.h"

void   print_args(int argc , char **argv)
{
    int i = 1;
    while (i < argc) 
    {
        ft_putstr_fd(argv[i++],1);
        ft_putchar_fd('\n', 1);
    } 
}

int main(int argc, char **argv)
{
    if (argc > 2)
        print_args(argc, argv);
    return (0);
}