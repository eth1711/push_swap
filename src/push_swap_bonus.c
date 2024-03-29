/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 11:58:28 by etlim             #+#    #+#             */
/*   Updated: 2023/08/17 15:10:37 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	instruction(t_list **stack_a, t_list **stack_b, char *str)
{
	if (!ft_strcmp(str, "sa\n"))
		swap(stack_a, 'a');
	else if (!ft_strcmp(str, "sb\n"))
		swap(stack_b, 'b');
	else if (!ft_strcmp(str, "ra\n"))
		rotate(stack_a, 'a');
	else if (!ft_strcmp(str, "rb\n"))
		rotate(stack_b, 'b');
	else if (!ft_strcmp(str, "rra\n"))
		rev_rotate(stack_a, 'a');
	else if (!ft_strcmp(str, "rrb\n"))
		rev_rotate(stack_b, 'b');
	else if (!ft_strcmp(str, "pa\n"))
		push(stack_b, stack_a, 'a');
	else if (!ft_strcmp(str, "pb\n"))
		push(stack_a, stack_b, 'b');
	else if (!ft_strcmp(str, "ss\n"))
		dual(stack_a, stack_b, swap, 's');
	else if (!ft_strcmp(str, "rr\n"))
		dual(stack_a, stack_b, rotate, 'r');
	else if (!ft_strcmp(str, "rrr\n"))
		dual(stack_a, stack_b, rotate, 'r');
	else
		return (ft_putendl_fd("Error", 2), 0);
	return (1);
}

void	do_instructions(t_list **stack_a, t_list **stack_b)
{
	char	*str;

	str = get_next_line(0);
	while (str)
	{
		if (!ft_strcmp(str, "\n"))
		{
			free(str);
			exit(0);
		}
		else if (!instruction(stack_a, stack_b, str))
		{
			free(str);
			exit(0);
		}
		free(str);
		str = get_next_line(0);
	}
	if (is_sorted(*stack_a))
		ft_printf("OK\n");
	else
		ft_printf("K0\n");
}

int	main(int c, char **str)
{
	t_list	*a;
	t_list	*b;
	int		i;

	if (c < 3 || !check_parse(str))
		return (-1);
	i = 0;
	a = NULL;
	b = NULL;
	while (++i < c)
		ft_lstadd_back(&a, ft_lstnew(ft_atoi(str[i])));
	index_values(a, INT_MAX);
	do_instructions(&a, &b);
	ft_lstclear(&a);
	ft_lstclear(&b);
}
