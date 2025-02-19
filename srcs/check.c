/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:24:18 by guvascon          #+#    #+#             */
/*   Updated: 2025/02/19 15:36:28 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int error_syntax(char *str)
{
	int i;

	i = 0;
	if (!(str[i] == '-' || str[i] == '+' || (str[i] >= 48 && str[i] <= 57)))
		return(1);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while(str[i])
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			return (1);
		i++;
	}
	return (0);
}

int duplicate(t_list *a, int n)
{
	if (!a)
		return (0);
	while(a)
	{
		if (a->content == n)
			return (1);
		a = a->next;
	}
	return (0);
}