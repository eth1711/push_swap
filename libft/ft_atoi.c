/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:36:15 by etlim             #+#    #+#             */
/*   Updated: 2023/08/16 19:34:38 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atoi(char *str)
{
	int			i;
	long int	res;
	long int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] != '\0' && str[i] > 47 && str[i] < 58)
	{
		res = (res * 10 + (str[i] - '0'));
		i++;
	}
	return (res * sign);
}

/* #include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char str[] = "22";
	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));
} */