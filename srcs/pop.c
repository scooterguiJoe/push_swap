/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:58:43 by guvascon          #+#    #+#             */
/*   Updated: 2025/02/19 17:02:23 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_list popfirst(t_list **stack)
{
    t_list *tmp;

    if(!(*stack))
        return (NULL);
    tmp = *stack;
    *stack = (*stack)->next;
    tmp->next = NULL;
    return(tmp);
}