/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:39:02 by etlim             #+#    #+#             */
/*   Updated: 2023/08/16 18:07:21 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	if (simple_sorting(&a, &b, c))
		return (0);
	if (!is_sorted(a))
		radix_sort(&a, &b);
	ft_lstclear(&a);
	ft_lstclear(&b);
}
