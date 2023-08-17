/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:39:13 by etlim             #+#    #+#             */
/*   Updated: 2023/08/16 17:49:37 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "libft.h"

int		get_value(t_list *stack);
void	index_values(t_list *str, int val);

void	swap(t_list **stack, char c);
void	rotate(t_list **stack, char c);
void	rev_rotate(t_list **stack, char c);
void	push(t_list **src_stack, t_list **dst_stack, char c);
void	dual(t_list **a, t_list **b, void (*f)(t_list **, char), char c);

int		check_alpha(char *str);
int		check_dup(char **str, int i, int num);
int		check_parse(char **str);

int		count_bits(int size);
void	radix_sort(t_list **stack_a, t_list **stack_b);

int		simple_sorting(t_list **stack_a, t_list **stack_b, int c);
void	sort_three(t_list **lst);
void	sort_four_five(t_list **stack_a, t_list **stack_b, int c);

int		is_sorted(t_list *stack);
void	push_to_top(t_list **head, int num, int size, char c);
void	print_stack(t_list *stack);

#endif