/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:10:16 by guvascon          #+#    #+#             */
/*   Updated: 2025/03/05 17:02:00 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int stack_len(t_list *a)
{
	int len;

	len = 0;
	if(!a)
		return (0);
	while(a)
	{
		len++;
		a = a->next;
	}
	return (len);
}

long int ft_atol(char *str)
{
	long int res;
	int sign;
	int num;

	res = 0;
	sign = 1;
	num = 0;
	while(str[res] == 32 || (str[res] >= 9 && str[res] <= 13))
		res++;
	if(str[res] == '-')
	{
		sign *= -1;
		res++;
	}
	else if(str[res] == '+')
		res++;
	while(str[res] >= 48 && str[res] <= 57)
	{
		num *= 10;
		num += str[res] - 48;
		res++;
	}
	return (num * sign);
}
bool ft_isvalid(int ac, char **av)
{
	char **split;
	int i;
	int j;

	i = 1;
	while(i < av)
	{
		split = ft_split(av[i], ' ');
	}
}