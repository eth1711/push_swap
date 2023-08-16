/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethanlim <ethanlim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:29:46 by ethanlim          #+#    #+#             */
/*   Updated: 2023/08/15 23:43:42 by ethanlim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	new->next = NULL;
	if (*lst)
	{
		temp = ft_lstlast(*lst);
		new->prev = temp;
		temp->next = new;
	}
	else
		*lst = new;
	return ;
}
