/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 16:57:02 by guvascon          #+#    #+#             */
/*   Updated: 2025/03/26 16:01:21 by guvascon         ###   ########.fr       */
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

int	is_sorted(t_stack *stack)
{
	t_node	*current;
	
	current = stack->head;
	while(current->next != NULL)
	{
		if(current->content < current->next->content)
		{
			return (1);
		}
		current = current->next;
	}
	return (0);
}
// void ft_error()
// {
// 	write(1, "error\n", 6);
// 	return(1);
// }