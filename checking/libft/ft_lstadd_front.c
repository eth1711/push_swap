/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:44:54 by etlim             #+#    #+#             */
/*   Updated: 2023/08/16 13:18:20 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	new->prev = NULL;
	if (!lst || !*lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	temp = *lst;
	temp->prev = new;
	*lst = new;
}
