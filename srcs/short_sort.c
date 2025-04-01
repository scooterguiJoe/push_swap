/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 15:34:50 by guvascon          #+#    #+#             */
/*   Updated: 2025/04/01 17:08:35 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void sorting_two(t_stack *stack_a)
{
    ft_swap(stack_a, 'a');
}

void sorting_three(t_stack *stack_a)
{
    if(stack_a->head->rank < stack_a->head->next->rank
        && stack_a->head->next->rank > stack_a->tail->rank
        && stack_a->tail->rank > stack_a->head->rank)
    {
        ft_rrotate(stack_a, 'a');
        ft_swap(stack_a, 'a');
    }
    else if(stack_a->head->rank > stack_a->head->next->rank
    && stack_a->head->next->rank < stack_a->tail->rank
    && stack_a->tail->rank > stack_a->head->rank)
        ft_swap(stack_a, 'a');
    else if(stack_a->head->rank < stack_a->head->next->rank
            && stack_a->head->next->rank > stack_a->tail->rank
            && stack_a->tail->rank < stack_a->head->rank)
        ft_rrotate(stack_a, 'a');
    else if(stack_a->head->rank > stack_a->head->next->rank 
    && stack_a->head->next->rank < stack_a->tail->rank
    && stack_a->tail->rank < stack_a->head->rank)
        ft_rotate(stack_a, 'a');
    else
    {
        ft_rotate(stack_a, 'a');
        ft_swap(stack_a, 'a');
    } 
}

void sorting_four_five(t_stack *stack_a, t_stack *stack_b)