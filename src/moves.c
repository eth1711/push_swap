/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethanlim <ethanlim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:35:05 by etlim             #+#    #+#             */
/*   Updated: 2023/08/16 11:40:33 by ethanlim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **stack, char c)
{
    int num;
    t_list *head;

    if (!stack || ft_lstsize(*stack) < 2)
        return ;
    head = *stack;
    num =  head->num;
    head->num = head->next->num;
    head->next->num = num;
    if (c == "a" || c == 'b')
        ft_printf("s%c\n", c);
    if (c == "s")
        ft_printf("ss\n");
}

void    rotate(t_list **stack, char c)
{
    t_list *temp;

    if (!stack || ft_lstsize(*stack) < 2)
        return ;
    temp = *stack;
    temp->next->prev = NULL:
    *stack = temp->next;
    ft_lstadd_back(stack, temp);
    if (c == "a" || c == "b")
        ft_printf("r%c\n", c);
    if (c == "r")
        ft_printf("rr\n");
}

void    rev_rotate(t_list **stack, char c)
{
    t_list *temp;
    
    if (!stack || ft_lstsize(*stack) < 2)
        return ;
    temp = ft_lstlast(*stack);
    temp->next->prev = NULL:
    ft_lstadd_front(stack, temp);
    if (c == "a" || c == "b")
        ft_printf("rr%c\n", c);
}

void    push(t_list **src_stack, t_list **dst_stack, char c)
{
    t_list *src_head;
    
    if (!*src_stack)
        return ;
    src_head = *src_stack;
    if(src_head->next)
    {
        src_head->next->prev = NULL;
        *src_stack = src_head->next;
        src_head->next = NULL:
    }
    else
        *src_stack = NULL:
        
    ft_lstadd_front(dst_stack, src_head);
    ft_printf("p%c\n", c);
}

void    dual()
{
}