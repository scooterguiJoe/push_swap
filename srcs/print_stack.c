/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 15:18:56 by guvascon          #+#    #+#             */
/*   Updated: 2025/04/01 15:24:31 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_node	*ft_newlst(int content) // criar node
{
	t_node	*elm;

	elm = malloc(sizeof(t_node));
	if (!elm)
		return (NULL);
	elm->content = content;
	elm->previous = NULL;
	elm->next = NULL;
	return (elm);
}

void	ft_lstaddfront(t_stack *lst, t_node *new) 
{
	t_node	*head;

	head = lst->head;
	if (!lst || !new)
		return ;
	if (!head)
	{
		lst->head = new;
		lst->tail = new;
		lst->lenght = 1;
	}
	else
	{
		new->next = head;
		new->previous = NULL;
		head->previous = new;
		lst->head = new;
		lst->lenght++;
	}
}

void	ft_lstaddback(t_stack *lst, t_node *new) 
{
	if (!lst || !new)
		return ;
	if (lst->head == NULL)
	{
		lst->head = new;
		lst->tail = new;
		new->previous = NULL;
		new->next = NULL;
	}
	else
	{
		lst->tail->next = new;
		new -> previous = lst -> tail;
		new->next = NULL;
		lst -> tail = new;
	}
	lst->lenght++;
}

void	ft_clearlst(t_stack *lst)
{
	t_node	*current;

	current = lst->head;
	if (!lst)
		return ;
	while (lst->head)
	{
		current = lst->head->next;
		free(lst->head);
		lst->head = current;
	}
	lst->head = NULL;
	lst->tail = NULL;
	lst->lenght = 0;
}

void	ft_printstack(t_stack *stack, char id)
{
	t_node	*current;

	if (!stack->head)
		return ;
	printf("stack %c:\n\n", id);
	current = stack->head;
	while (current)
	{
		printf("content: %i\n", current->content);
		printf("rank: %i\n", current->rank);
		current = current->next;
	}
	//printf("%i\n", stack->lenght);
}
// #include <stdio.h>
// #include <unistd.h>
// int main()
// {
//     t_stack stack_a;
//     stack_a.head = NULL;
//     stack_a.tail = NULL;
//     ft_lstaddfront(&stack_a, ft_newlst(10));
//     ft_printstack(&stack_a, 'A');
// 	ft_clearlst(&stack_a);
// 	printf("cleaned\n");
//     return 0;
// }
