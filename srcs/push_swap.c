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

// int main(int ac, char **av)
// {
// 	static t_stack stack_a;
// 	static t_stack stack_b;

// 	if(ac < 2)
// 		write(1, "error\n", 6);
// 	stack_a = ft_checkargs(ac, av);
// 	if(stack_a.lenght == 0)
// 		write(1, "error\n", 6);
// 	if(is_sorted(&stack_a))
// 		ft_clearlst(&stack_a);
// 	ft_printstack(&stack_a, 'A');
// 	ft_clearlst(&stack_a);
	
// }


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
void	ft_normalize(t_stack *stack)
{
	t_node	*tmp;
	t_node	*current;
	int		rank;

	current = stack->head;
	while(current)
	{
		rank = 1;
		tmp = stack->head;
		while(tmp)
		{	
			if(current->content > tmp->content)
					rank++;
			tmp = tmp->next;
		}
		current->rank = rank;
		current = current->next;
	}
}