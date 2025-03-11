/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:30:15 by guvascon          #+#    #+#             */
/*   Updated: 2025/03/11 17:33:32 by guvascon         ###   ########.fr       */
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
			return (false);
		i++;
	}
	return (true);
}

int	ft_duplicate(t_list *a, int n)//por testar
{
	if (!a)
		return (0);
	while (a)
	{
		if (a->content == n)
			return (1);
		a = a->next;
	}
	return (0);
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
	while (i < av)
	{
		split = ft_split(av[i], ' ');
		j = 0;
		while (split[j])
		{
			if (!check_int(split[j]))
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
// #include <unistd.h>
// #include <stdio.h>
// int main()
// {
// 	char *d = "-2147483649";
// 	printf("%ld", ft_atol(d));
// }