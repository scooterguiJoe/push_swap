/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:30:15 by guvascon          #+#    #+#             */
/*   Updated: 2025/04/04 17:58:30 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	ft_isnbr(char *nbr)
{
	int	i;

	i = 0;
	if (nbr[i] == '+' || nbr[i] == '-')
		i++;
	while (nbr[i])
	{
		if (!ft_isdigit(nbr[i]))
			return (0);
		i++;
	}
	return (1);
}

bool	ft_duplicate(t_stack *stack, int n)
{
	t_node	*node;

	node = stack->head;
	while (node)
	{
		if (node->content == n)
			return (false);
		node = node->next;
	}
	return (true);
}

long	ft_atol(char *str)
{
	int		count;
	int		sign;
	long	num;

	count = 0;
	sign = 1;
	num = 0;
	while (str[count] == 32 || (str[count] >= 9 && str[count] <= 13))
		count++;
	if (str[count] == '+' || str[count] == '-')
	{
		if (str[count] == '-')
			sign *= -1;
		count++;
	}
	while (str[count] >= 48 && str[count] <= 57)
	{
		num *= 10;
		num += str[count] - 48;
		if (num > INT_MAX || num < INT_MIN)
			break ;
		count++;
	}
	return (num * sign);
}

bool	ft_isvalid(int ac, char **av)
{
	char	**split;
	int		i;
	int		j;

	i = 1;
	while (i < ac)
	{
		split = av;
		j = 0;
		while (av[j])
		{
			if (!ft_isnbr(av[j]))
			{
				free_split(split);
				return (false);
			}
			j++;
		}
		i++;
	}
	return (true);
}

bool	ft_checkspaces(char **av)
{
	int	i;
	int	j;

	j = 1;
	while (av[j])
	{
		i = 0;
		while (av[j][i] && white_spaces(av[j][i]))
			i++;
		if (av[j][i] == '\0')
			return (false);
		j++;
	}
	return (true);
}
// #include <unistd.h>
// #include <stdio.h>
// int main()
// {
// 	char *d = "-2147483649";
// 	printf("%ld", ft_atol(d));
// }