// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   push_swap.c                                        :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/02/18 15:02:06 by guvascon          #+#    #+#             */
// /*   Updated: 2025/03/12 12:28:55 by guvascon         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

#include "../inc/push_swap.h"

// // bool	ft_createstack(t_stack *stack, char **str)
// // {
// // 	t_node *node;
// // 	int i;
// // 	long num;
	
// // 	i = 0;
// // 	while(str[i])
// // 	{
// // 		num = ft_atol(str[i]);
// // 		if(!ft_duplicate(stack, (int)num))
// // 			write(1, "Error\n", 6);
// // 		node = ft_newlst((int)num);
// // 		if(!node)
// // 			return (false);
// // 		ft_lstaddback(stack, node);
// // 		i++;
// // 	}
// // 	return (true);
// // }
// // t_stack	ft_checkargs(int ac, char **av)
// // {
// // 	int	i;

// // 	i = 0;
// // 	while(i < ac)
	
	
// // }
int main(int argc, char **argv)
{
    t_stack stack_a;
    stack_a.head = NULL;
    stack_a.tail = NULL;
	long value;
	int i;
	int j;
	char **split;

	i = 1;
	while (i < argc)
	{
		split = ft_split(argv[i], ' ');
		j = 0;
		while(split[j])
		{
			value = ft_atol(split[j]);
			if (value < INT_MIN || value > INT_MAX)
			{
				free_split(split);
				return (write(2, "Error\n", 6));
				//exit (1);
			}
			ft_lstaddback(&stack_a, ft_newlst(value));
			j++;
		}
		j = 0;
		while (split[j])
		{
			//free(split[j]);
			j++;
		}
		free_split(split);
		i++;
	}
	ft_printstack(&stack_a, 'A');
	ft_clearlst(&stack_a);
	return 0;
}

t_stack ft_checkargs(int ac, char **av)
{
	char **str;
	t_stack stack;
	int i;

	stack = (t_stack){0};
	i = 0;
	str = ft_split(av[i], ' ');
	while(i < ac)
	{
		if(!str)
		{
			ft_clearlst(&stack);
			return (stack);
		}
		if(!ft_isvalid(ac, str))
		{
			ft_clearlst(&stack);
			return(stack);
		}
		free_split(str);
		i++;
	}
	return (stack);
}
