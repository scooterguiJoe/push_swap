/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:30:15 by guvascon          #+#    #+#             */
/*   Updated: 2025/05/01 14:43:14 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	ft_isnbr(char *nbr)
{
	int	i;

	i = 0;
	if (nbr[i] == '+' || nbr[i] == '-')
		i++;
	if (!nbr[i])
	{
		write (2, "Error\n", 6);
		return (0);
	}
	while (nbr[i])
	{
		if (!ft_isdigit(nbr[i]))
		{
			write(2, "Error\n", 6);
			return (0);
		}
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
	if (str[count] == 32 || (str[count] >= 9 && str[count] <= 13))
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
		if (!av)
		{
			write (2, "Error\n", 6);
			return (false);
		}
		while (av[j])
		{
			if (!ft_isnbr(av[j]))
				return (free_split(split), false);
			j++;
		}
		i++;
	}
	return (true);
}

bool	ft_checkwspaces(char **av)
{
	int	i;
	int	j;
	int	check;

	check = 0;
	j = 1;
	while (av[j])
	{
		i = 0;
		while (av[j][i])
		{
			if (white_spaces(av[j][i]))
				check++;
			i++;
		}
		if (av[j][0] == '\0')
			return (false);
		j++;
	}
	if (check == 0)
		return (false);
	return (true);
}
// #include <unistd.h>
// #include <stdio.h>
// int main()
// {
// 	char *d = "-2147483649";
// 	printf("%ld", ft_atol(d));
// }