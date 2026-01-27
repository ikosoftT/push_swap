/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 22:44:01 by yikoubaz          #+#    #+#             */
/*   Updated: 2026/01/26 07:19:10 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include <stdio.h>
# include "libft/libft.h"

t_list	*parse_logic(int argc, char **argv);
char	**parse_args(int argc, char **argv);
void	free_list(char **spl);
void	ft_err_exit(void);
char	*join_all(int argc, char **argv);
int		check_empty(int argc, char **argv);
int		is_valid(char *arg);

void	create_stack(t_list **top, long value, char **spl);

void	ft_swap(t_list **stack);
void	ft_push(t_list **src, t_list **dest);
void	reverse_rotate(t_list **stack);
void	rotate(t_list **stack);

void	pb(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_b, t_list **stack_a);

void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);

void	ra(t_list **stack_a);
void	rb(t_list **satck_b);
void	rr(t_list **stack_a, t_list **stack_b);

void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);

void	print_stack(t_list *top);
void	clear_stack(t_list **top);
int		check_dup(t_list *top);
int		is_sorted(t_list **stack);

t_list	*find_min(t_list *stack);
void	sort_two(t_list **stack);
void	sort_three(t_list **stack);
void	sort_five(t_list **stack_a, t_list **satck_b);
void	make_top(t_list **stack, int index);
int		find_index(t_list *stack, int value);

t_list	*ft_get_cheapest(t_list *b);
void	ft_set_target_pos(t_list *a, t_list *b);
void	ft_assign_index_to_each_node(int *sorted_arr, int size, t_list **stack);
void	ft_set_pos(t_list *stack);
void	ft_set_costs(t_list *a, t_list *b);
int		*ft_sort_arr(int *arr, int size);
int		ft_get_min_pos(t_list *stack);
int		*ft_copy_to_arr(t_list *stack);
void	ft_final_rotation(t_list **a);
void	ft_excute_all(t_list **a, t_list **b);
void	ft_index_stack(t_list **a);
void	ft_sort_large(t_list **a, t_list **b);

#endif
