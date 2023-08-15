/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:39:02 by etlim             #+#    #+#             */
/*   Updated: 2023/08/15 12:33:31 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int c, char **str)
{
	check_parse(str);
	if (c < 3 || !check_parse(str))
		return (-1);
	ft_printf("hello");
}

	// t_list	*a;
	// t_list	*b;
	// int		i;