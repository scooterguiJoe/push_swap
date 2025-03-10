/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:02:06 by guvascon          #+#    #+#             */
/*   Updated: 2025/03/10 17:28:29 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void init_stack(t_stack *stack) {
    stack->head = NULL;
    stack->tail = NULL;
    stack->lenght = 0;
}
int main() {
    t_stack stack_a, stack_b;
    
    // Inicializa as pilhas
    init_stack(&stack_a);
    init_stack(&stack_b);

    // Adiciona elementos à pilha A
    push(&stack_a, 5);
    push(&stack_a, 4);
    push(&stack_a, 3);
    push(&stack_a, 2);
    push(&stack_a, 1);
    
    // Imprime a pilha original
    ft_printstack(&stack_a, 'A');

    // Testa a função ft_swap
    ft_swap(&stack_a);
    ft_printstack(&stack_a, 'A');

    // Testa a função ft_push (move o topo de A para B)
    ft_push(&stack_a, &stack_b);
    ft_printstack(&stack_a, 'A');
    ft_printstack(&stack_b, 'B');

    // Testa a função ft_rotate
    ft_rotate(&stack_a);
    ft_printstack(&stack_a, 'A');

    // Testa a função ft_rrotate
    ft_rrotate(&stack_a);
    ft_printstack(&stack_a, 'A');

    return 0;
}