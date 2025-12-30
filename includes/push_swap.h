/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 13:32:20 by yikoubaz          #+#    #+#             */
/*   Updated: 2025/12/30 18:44:46 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_node
{
	int	value;
	int	index;
	struct s_node	*next;
}	t_node;

// Parsing

void	parse_args(int ac, char **av, t_node **a);

// Stack Actions !!

t_node	*new_node(int value);
void	add_back(t_node **stack, t_node *new);
void	add_front(t_node **stack, t_node *new);
int	stack_size(t_node *stack);
t_node	*last_node(t_node *stack);

// Utils

int	is_sorted(t_node *stack);
void	free_stack(t_node **stack);
void	error_exit(void);

// Operations

void	sa(t_node **a);
void	sb(t_node **b);
void	ss(t_node **a, t_node **b);
void	pa(t_node **a, t_node **b);
void	pb(t_node **a, t_node **b);
void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);
void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);

// Sorting 

void	index_stack(t_node *a);
void	sort_small(t_node **a, t_node **b);
void	sort_big(t_node **a, t_node **b);

#endif

