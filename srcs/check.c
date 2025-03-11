/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:24:18 by guvascon          #+#    #+#             */
/*   Updated: 2025/03/11 17:33:57 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	free_stack(t_node *stack)
{
	t_node	*current;
	t_node	*next_node;

	if (!stack)
		return ;
	while (current != NULL)
	{
		next_node = current->next;
		free (current->content);
		free (current);
		current = next_node;
	}
}
// #include <unistd.h>
// #include <stdio.h>
// #include <stdbool.h>
// int main()
// {
// 	char *test = "a";
// 	printf("%d\n", check_int(test));
// }