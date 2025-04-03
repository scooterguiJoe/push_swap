/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 16:57:02 by guvascon          #+#    #+#             */
/*   Updated: 2025/04/03 16:50:38 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	free_split(char **av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		free(av[i]);
		i++;
	}
	free(av);
}

void	all_clear(char **str, t_stack *stack)
{
	if(!str)
	{
		ft_clearlst(stack);
		exit (0);
	}
	else
	{
		free_split(str);
		ft_clearlst(stack);
		exit (0);
	}
}
int	is_sorted(t_stack *stack)
{
	t_node	*current;
	
	if(stack->lenght <= 1)
		return (1);
	current = stack->head;
	while(current->next != NULL)
	{
		if(current->content > current->next->content)
		{
			return (0);
		}
		current = current->next;
	}
	return (1);
}
// void ft_error()
// {
// 	write(1, "error\n", 6);
// 	return(1);
// }