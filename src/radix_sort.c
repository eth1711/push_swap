/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:20:47 by etlim             #+#    #+#             */
/*   Updated: 2023/08/16 17:39:26 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_bits(int size)
{
	int	i;

	i = 0;
	while ((size >> i) != 0)
		i++;
	return (i);
}

void	radix_sort(t_list **stack_a, t_list **stack_b)
{
	int	bits;
	int	max_bits;
	int	size;
	int	i;

	i = 0;
	bits = 0;
	size = ft_lstsize(*stack_a);
	max_bits = count_bits(size);
	while (bits < max_bits)
	{
		i = 0;
		while (i++ < size)
		{
			if (((*stack_a)->index >> bits) & 1)
				rotate(stack_a, 'a');
			else
				push(stack_a, stack_b, 'b');
		}
		while (*stack_b)
			push(stack_a, stack_b, 'a');
		bits++;
	}
}
