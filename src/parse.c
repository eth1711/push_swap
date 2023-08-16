/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 09:53:35 by etlim             #+#    #+#             */
/*   Updated: 2023/08/16 17:10:47 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_alpha(char *str)
{
	if (*str == '-' || *str == '+')
		str++;
	while (*str)
	{
		if (*str > '0' && *str < '9')
			str++;
	}
	return (1);
}

int	check_dup(char **str, int i, int num)
{
	while (str[++i])
	{
		if (ft_atoi(str[i]) == num)
			return (0);
	}
	return (1);
}

int	check_parse(char **str)
{
	int			i;
	long int	num;

	i = 0;
	while (str[++i])
	{
		num = ft_atoi(str[i]);
		if (!check_alpha(str[i]))
			return (ft_putendl_fd("Error", 2), 0);
		if (num < INT_MIN || num > INT_MAX)
			return (ft_putendl_fd("Error", 2), 0);
		if (!check_dup(str, i, num))
			return (ft_putendl_fd("Error", 2), 0);
	}
	return (1);
}
