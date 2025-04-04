/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 12:04:20 by guvascon          #+#    #+#             */
/*   Updated: 2025/04/04 17:31:10 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	count_bits(int num)
{
	int	max;

	max = 0;
	while (num > 0)
	{
		max++;
		num >>= 1;
	}
	return (max);
}

void	radix_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	max;
	int	i;

	i = 0;
	while (is_sorted(stack_a) == 0)
	{
		max = stack_a->lenght;
		while (max > 0)
		{
			if (stack_a->head->rank & (1 << i))
			{
				ft_rotate(stack_a, 'a', 1);
			}
			else
				ft_push(stack_a, stack_b, 'b');
			max--;
		}
		while (stack_b->lenght > 0)
			ft_push(stack_b, stack_a, 'a');
		i++;
	}
}
