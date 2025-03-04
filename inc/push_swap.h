/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:01:08 by guvascon          #+#    #+#             */
/*   Updated: 2025/03/04 13:09:43 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdint.h>
# include "../Libft/libft.h"

typedef struct s_node
{
	int				*content;
	struct s_node	*previous;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	int			*lenght;
	t_node		*head;
	t_node		*tail;
}	t_stack;


//aux.c
int stack_len(t_list *a);
long int ft_atol(char *str);

//check.c
int error_syntax(char *str);
int ft_duplicate(t_list *a, int n);
void free_stack(t_node *stack);

//print_stack.c
//void ft_lstnew(int content);
void ft_lstaddfront(t_stack *lst,t_node *new);
void ft_lstaddback(t_stack *lst, t_node *new);

//push_swap.c
//push.c
int stack_len(t_list *a);
long int ft_atol(char *str);

# endif