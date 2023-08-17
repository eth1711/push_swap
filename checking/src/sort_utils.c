/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:26:10 by etlim             #+#    #+#             */
/*   Updated: 2023/08/16 18:24:15 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_list *stack)
{
	t_list	*a;

	if (!stack)
	{
		ft_printf("(null)\n");
		return ;
	}
	a = stack;
	while (a->next)
	{
		ft_printf("%i ", a->num);
		a = a->next;
	}
	ft_printf("%i\n", a->num);
}

int	is_sorted(t_list *stack)
{
	stack = stack->next;
	while (stack)
	{
		if (stack->prev->num > stack->num)
			return (0);
		stack = stack->next;
	}
	return (1);
}

void	push_to_top(t_list **head, int num, int size, char c)
{
	t_list	*stack;
	int		i;

	i = 0;
	stack = *head;
	while (i++ <= size && stack->index != num)
		stack = stack->next;
	if ((size / 2) >= i)
	{
		while (i-- > 1)
			rotate(head, c);
	}
	else
	{
		while (i++ <= size)
			rev_rotate(head, c);
	}
}
