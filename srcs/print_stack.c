/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 15:18:56 by guvascon          #+#    #+#             */
/*   Updated: 2025/03/03 16:59:55 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void ft_lstnew(int content) // criar node
{
	t_node *elm;
	
	elm = malloc(sizeof(t_node));
	if(!elm)
		return (NULL);
	elm->content = content;
	elm->previous = NULL;
	elm->next = NULL;

	return (elm);
}

void ft_lstaddfront(t_stack *lst,t_node *new) //criar nodes no inicio da stack B
{
	if(!lst || !new)
		return;
	if()//se a stack estiver vazia
	{
		
	}
	else
	{
		
	
	}
}

void ft_lstaddback(t_stack *lst, t_node *new) //criar nodes no fim da stack A
{
	if(!lst || !new)
		return;
	if(lst->head = NULL)
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

void ft_clearlst(t_stack *lst)
{
	t_node *current;
	
	current = lst->head;
	if(!lst)
		return ;
	while(current)
	{
		free(current -> content);
		current = current ->next;
		free(current->previous);
	}
	lst->head = NULL;
	lst->tail = NULL;
}
//void ft_printstack(t_node * stack, char )

