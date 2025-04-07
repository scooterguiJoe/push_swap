/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:01:08 by guvascon          #+#    #+#             */
/*   Updated: 2025/04/07 11:13:25 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <limits.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdbool.h>
# include "../Libft/libft.h"

typedef struct s_node
{
	int				rank;
	int				content;
	struct s_node	*previous;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	int			lenght;
	t_node		*head;
	t_node		*tail;
}	t_stack;

//aux.c
int			ft_isnbr(char *nbr);
bool		ft_duplicate(t_stack *stack, int n);
long int	ft_atol(char *str);
bool		ft_isvalid(int ac, char **av);
bool		ft_checkwspaces(char **av);

//check.c
void		free_stack(t_node *stack);

//print_stack.c
t_node		*ft_newlst(int content);
void		ft_lstaddfront(t_stack *lst, t_node *new);
void		ft_lstaddback(t_stack *lst, t_node *new);
void		ft_printstack(t_stack *stack, char id);
void		ft_clearlst(t_stack *lst);

//push_swap.c
t_stack		ft_checkargs(int ac, char **av);
void		ft_normalize(t_stack *stack);
bool		ft_createstack(t_stack *stack, char **str);
void		ft_processstack(t_stack *stack_a, t_stack *stack_b);

//move_push.c
void		ft_swap(t_stack *src, char flag);
void		ft_push(t_stack *src, t_stack *dest, char flag);
void		ft_rotate(t_stack *src, char flag, int both);
void		ft_rrotate(t_stack *src, char flag);

//move_move.c
void		ft_ss(t_stack *stack_a, t_stack *stack_b);
void		ft_rr(t_stack *stack_a, t_stack *stack_b);
void		ft_rrr(t_stack *stack_a, t_stack *stack_b);

//push_utils.c
void		free_split(char **av);
int			is_sorted(t_stack *stack);
void		all_clear(char **str, t_stack *stack);
int			white_spaces(int space);

//radix_sort.c
int			count_bits(int num);
void		radix_sort(t_stack *stack_a, t_stack *stack_b);

//short_sort.c
void		sorting_two(t_stack *stack_a);
void		sorting_three(t_stack *stack_a);
void		sorting_four_five(t_stack *stack_a, t_stack *stack_b);
void		final_sorting(t_stack *stack_a, t_stack *stack_b);

#endif