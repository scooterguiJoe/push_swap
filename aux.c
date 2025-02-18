/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:10:16 by guvascon          #+#    #+#             */
/*   Updated: 2025/02/18 16:19:47 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../inc/push_swap.h"

// int stack_len(t_list *a)
// {
// 	int len;

// 	len = 0;
// 	if(!a)
// 		return (0);
// 	while(a)
// 	{
// 		len++;
// 		a = a->next;
// 	}
// 	return (len);
// }

long int ft_atol(char *str)
{
	int i;
	int sign;
	long int num;

	i = 0;
	sign = 1;
	num = 0;
	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if(str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if(str[i] == '+')
		i++;
	while(str[i] >= 48 && str[i] <= 57)
	{
		num *= 10;
		num += str[i] - 48;
		i++;
	}
	return (num * sign);
}
