/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:02:06 by guvascon          #+#    #+#             */
/*   Updated: 2025/03/11 17:44:12 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

bool	ft_createstack(t_stack *stack, char **str)
{
	t_node *node;
	int i;
	long num;
	
	i = 0;
	while(str[i])
	{
		num = ft_atol(str[i]);
		if(!ft_duplicate(stack, (int)num))
			write(1, "Error\n", 6);
		node = ft_newlst((int)num);
		if(!node)
			return (false);
		ft_lstaddback(stack, node);
		i++;
	}
	return (true);
}
t_stack	ft_checkargs(int ac, char **av)
{
	int	i;

	i = 0;
	while(i < ac)
	
	
}
int main(int argc, char **argv)
{
    t_stack stack_a;
    stack_a.head = NULL;
    stack_a.tail = NULL;
	long value;
	int i;

	i = 1;
    while (i < argc)
    {
        value = ft_atol(argv[i]);
		if (value < INT_MIN || value > INT_MAX)
		{
				return (write(2, "Error\n", 6));
				exit (0);
		}
        ft_lstaddback(&stack_a, ft_newlst(value));
		i++;
    }
	ft_printstack(&stack_a, 'A');
	ft_clearlst(&stack_a);
    return 0;
}
