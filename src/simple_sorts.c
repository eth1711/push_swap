/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sorts.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:21:18 by etlim             #+#    #+#             */
/*   Updated: 2023/08/16 14:20:11 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_sort(t_list **lst)
{
	t_list	*stack;

	stack = (*lst)->next;
	if (stack->prev->index > stack->index)
	{
		if ((stack->prev->index > stack->next->index)
			&& (stack->next->index > stack->index))
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
