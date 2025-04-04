/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 16:57:02 by guvascon          #+#    #+#             */
/*   Updated: 2025/04/04 17:58:39 by guvascon         ###   ########.fr       */
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
	if (!str)
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
	int		i;

	i = 1;
	if (stack->lenght <= 1)
		return (1);
	current = stack->head;
	while (i < stack->lenght)
	{
		if (current->content > current->next->content)
		{
			return (0);
		}
		current = current->next;
		i++;
	}
	return (1);
}

int	white_spaces(int space)
{
	if ((space >= 9 && space <= 13) || space == 32)
		return (false);
	return (true);
}
