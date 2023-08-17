/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 17:26:49 by ethanlim          #+#    #+#             */
/*   Updated: 2023/08/16 17:46:19 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_value(t_list *stack)
{
	int	num;

	num = stack->num;
	while (stack)
	{
		if (stack->num < num)
			num = stack->num;
		stack = stack->next;
	}
	return (num);
}

void	index_values(t_list *str, int val)
{
	int		min;
	int		index;
	t_list	*stack;

	index = ft_lstsize(str);
	while (index)
	{
		stack = str;
		min = get_value(str);
		while (stack)
		{
			if ((stack->num > min) && (stack->num < val))
				min = stack->num;
			stack = stack->next;
		}
		val = min;
		stack = str;
		while ((stack) && (stack->num != val))
			stack = stack->next;
		stack->index = index;
		index--;
	}
}
