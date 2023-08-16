/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sorts.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:21:18 by etlim             #+#    #+#             */
/*   Updated: 2023/08/16 19:23:29 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_list **lst)
{
	t_list	*stack;

	if (is_sorted(*lst))
		return ;
	stack = (*lst)->next;
	if (stack->prev->index > stack->index)
	{
		if ((stack->prev->index > stack->next->index)
			&& (stack->index < stack->next->index))
			rotate(lst, 'a');
		else if (stack->next->index > stack->index)
			swap(lst, 'a');
		else
		{
			swap(lst, 'a');
			rev_rotate(lst, 'a');
		}
	}
	else if (stack->prev->index < stack->index)
		rev_rotate(lst, 'a');
	else
	{
		swap(lst, 'a');
		rotate(lst, 'a');
	}
}

void	sort_four_five(t_list **stack_a, t_list **stack_b, int c)
{
	if (is_sorted(*stack_a))
		return ;
	if (c == 5)
	{
		push_to_top(stack_a, 1, ft_lstsize(*stack_a), 'a');
		push(stack_a, stack_b, 'b');
		sort_three(stack_a);
		push(stack_b, stack_a, 'a');
	}
	if (c == 6)
	{
		push_to_top(stack_a, 1, ft_lstsize(*stack_a), 'a');
		push(stack_a, stack_b, 'b');
		push_to_top(stack_a, 2, ft_lstsize(*stack_a), 'a');
		push(stack_a, stack_b, 'b');
		sort_three(stack_a);
		push(stack_b, stack_a, 'a');
		push(stack_b, stack_a, 'a');
	}
}

int	simple_sorting(t_list **stack_a, t_list **stack_b, int c)
{
	if (c == 3 && (*stack_a)->num > (*stack_a)->next->num)
		return (swap(stack_a, 'a'), 1);
	if (c == 4)
		return (sort_three(stack_a), 1);
	if (c == 5 || c == 6)
		return (sort_four_five(stack_a, stack_b, c), 1);
	return (0);
}
