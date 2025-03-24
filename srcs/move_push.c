/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 12:10:57 by guvascon          #+#    #+#             */
/*   Updated: 2025/03/24 16:37:59 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_swap(t_stack *src, char flag)
{
	t_node	*top;
	t_node	*second;

	if (src->lenght < 2)
		return ;
	top = src->head;
	second = top->next;
	if (!second)
		return ;
	top->next = second->next;
	if (second->next)
		second->next->previous = top;
	second->previous = NULL;
	second->next = top;
	src->head = second;
	ft_printf("s%c\n", flag);
}

void	ft_push(t_stack *src, t_stack *dest, char flag)
{
	t_node	*tmp;

	if (src->lenght == 0)
		return ;
	tmp = src->head;
	src->head = src->head->next;
	src->lenght--;
	ft_lstaddfront(dest, tmp);
	ft_printf("p%c\n", flag);
}

void	ft_rotate(t_stack *src, char flag)
{
	t_node	*tmp;

	if (src->lenght < 2)
		return ;
	tmp = src->head;
	src->head = src->head->next;
	src->tail->next = tmp;
	tmp->previous = src->tail;
	tmp->next = NULL;
	src->tail = tmp;
	ft_printf("r%c\n", flag);
}

void	ft_rrotate(t_stack *src, char flag)
{
	t_node	*tmp;

	if (src->lenght < 2)
		return ;
	tmp = src->tail;
	src->tail = src->tail->previous;
	src->tail->next = NULL;
	tmp->next = src->head;
	src->head->previous = tmp;
	src->head = tmp;
	ft_printf("rr%c\n", flag);
}

// void	push(t_stack *stack, int value)
// {
// 	t_node	*new_node;

// 	new_node = malloc(sizeof(t_node));
// 	new_node->content = value;
// 	new_node->next = stack->head;
// 	new_node->previous = NULL;
// 	if (stack->head != NULL)
// 		stack->head->previous = new_node;
// 	stack->head = new_node;
// 	if (stack->tail == NULL)
// 		stack->tail = new_node;
// 	stack->lenght++;
// }
