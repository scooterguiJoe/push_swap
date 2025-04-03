/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 15:34:50 by guvascon          #+#    #+#             */
/*   Updated: 2025/04/03 17:05:42 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	sorting_two(t_stack *stack_a)
{
	ft_swap(stack_a, 'a');
}

void	sorting_three(t_stack *stack_a)
{
	if (stack_a->head->rank < stack_a->head->next->rank \
	&& stack_a->head->next->rank > stack_a->tail->rank \
	&& stack_a->tail->rank > stack_a->head->rank)
	{
		ft_rrotate(stack_a, 'a');
		ft_swap(stack_a, 'a');
	}
	else if (stack_a->head->rank > stack_a->head->next->rank \
	&& stack_a->head->next->rank < stack_a->tail->rank \
	&& stack_a->tail->rank > stack_a->head->rank)
		ft_swap(stack_a, 'a');
	else if (stack_a->head->rank < stack_a->head->next->rank \
			&& stack_a->head->next->rank > stack_a->tail->rank \
			&& stack_a->tail->rank < stack_a->head->rank)
		ft_rrotate(stack_a, 'a');
	else if (stack_a->head->rank > stack_a->head->next->rank \
	&& stack_a->head->next->rank < stack_a->tail->rank \
	&& stack_a->tail->rank < stack_a->head->rank)
		ft_rotate(stack_a, 'a');
	else
	{
		ft_rotate(stack_a, 'a');
		ft_swap(stack_a, 'a');
	}
}

// void	sorting_four_five(t_stack *stack_a, t_stack *stack_b)
// {
// 	while (!is_sorted(stack_a) == 0 && stack_b->lenght == 0)
// 	{
// 		while (stack_b->lenght <= 1)
// 		{
// 			if (stack_a->head->rank == 1 || stack_a->head->rank == 2)
// 				ft_push(stack_a, stack_b, 'a');
// 			else
// 				ft_rotate(stack_a, 'a');
// 		}
// 		if (is_sorted(stack_a) == 0)
// 		{
// 			if (stack_a->lenght == 3)
// 				sorting_three(stack_a);
// 			else
// 				sorting_two(stack_a);
// 		}
// 		if (stack_b->head->rank == 1)
// 			ft_swap(stack_b, 'b');
// 		ft_push(stack_b, stack_a, 'b');
// 		ft_push(stack_b, stack_a, 'b');
// 	}
// }
void sorting_four_five(t_stack *stack_a, t_stack *stack_b)
{
    while (!is_sorted(stack_a))
    {
        while (stack_a->lenght > 3)
        {
			printf("teste\n");
            if (stack_a->head->rank == 1 || stack_a->head->rank == 2)
			{
			   	ft_push(stack_a, stack_b, 'a');
				printf("teste1\n");
			}
            else
			{
                ft_rotate(stack_a, 'a');
				printf("teste2\n"); //ERRO AQUI O LOOP NAO SAI DAQUI
			}
        }
        if (stack_a->lenght == 3)
            sorting_three(stack_a);
        else if (stack_a->lenght == 2)
            sorting_two(stack_a);
        while (stack_b->lenght > 0)
        {
            if (stack_b->head->rank == 1)
                ft_swap(stack_b, 'b'); 
            ft_push(stack_b, stack_a, 'b');
        }
    }
}
void	final_sorting(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->lenght == 2)
		sorting_two(stack_a);
	else if (stack_a->lenght == 3)
		sorting_three(stack_a);
	else if (stack_a->lenght == 4 || stack_a->lenght == 5)
		sorting_four_five(stack_a, stack_b);
}
