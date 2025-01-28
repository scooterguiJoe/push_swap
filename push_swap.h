/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:01:08 by guvascon          #+#    #+#             */
/*   Updated: 2025/01/28 16:09:22 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_A
# define PUSH_SWAP_A

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdint.h>
# include "Libft/libft.h"

typedef struct s_list
{
	int			*content;
	void		*previous;
	void		*next;
}	t_list;

typedef struct s_stack
{
	
	void		*head;
	void		*tail;
}	t_stack;

# endif