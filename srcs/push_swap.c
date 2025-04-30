/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 17:26:27 by guvascon          #+#    #+#             */
/*   Updated: 2025/04/30 14:03:54 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

bool	ft_createstack(t_stack *stack, char **str)
{
	t_node	*node;
	int		i;
	long	num;

	i = 0;
	while (str[i])
	{
		num = ft_atol(str[i]);
		if (num < INT_MIN || num > INT_MAX)
		{
			write (1, "Error\n", 6);
			return (false);
		}
		if (!ft_duplicate(stack, (int)num))
		{
			write(1, "Error\n", 6);
			return (false);
		}
		node = ft_newlst((int)num);
		if (!node)
			return (false);
		ft_lstaddback(stack, node);
		i++;
	}
	return (true);
}

void	ft_processstack(t_stack *stack_a, t_stack *stack_b)
{
	ft_normalize(stack_a);
	if (stack_a->lenght <= 5)
	{
		final_sorting(stack_a, stack_b);
		ft_printstack(stack_a);
	}
	else
		radix_sort(stack_a, stack_b);
	ft_clearlst(stack_a);
}   

int	main(int argc, char **argv)
{
	static t_stack	stack_a;
	static t_stack	stack_b;

	if (ft_checkwspaces(argv) == false)
		return (write (1, "Error\n", 6));
	stack_a = ft_checkargs(argc, argv);
	if (stack_a.lenght == 0)
		return (0);
	if (is_sorted(&stack_a) == 0)
		ft_processstack(&stack_a, &stack_b);
	ft_clearlst(&stack_a);
	return (0);
}

t_stack	ft_checkargs(int ac, char **av)
{
	char	**str;
	t_stack	stack;
	int		i;

	stack = (t_stack){0};
	i = 1;
	while (i < ac)
	{
		str = ft_split(av[i], ' ');
		if (!str)
			all_clear(0, &stack);
		if (!ft_isvalid(ac, str))
			return (ft_clearlst(&stack), stack);
		if (!ft_createstack(&stack, str))
			return (all_clear(str, &stack), stack);
		free_split(str);
		i++;
	}
	return (stack);
}

void	ft_normalize(t_stack *stack)
{
	t_node	*tmp;
	t_node	*current;
	int		rank;

	current = stack->head;
	while (current)
	{
		rank = 1;
		tmp = stack->head;
		while (tmp)
		{
			if (current->content > tmp->content)
				rank++;
			tmp = tmp->next;
		}
		current->rank = rank;
		current = current->next;
	}
}
