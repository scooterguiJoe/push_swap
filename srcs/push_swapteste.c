/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swapteste.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 13:30:58 by guvascon          #+#    #+#             */
/*   Updated: 2025/04/01 15:22:21 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

 int main(int argc, char **argv)
{
    t_stack stack_a;
    t_stack stack_b;

    stack_a.head = NULL;
    stack_a.tail = NULL;
    stack_a.lenght = 0;
    stack_b.head = NULL;
    stack_b.tail = NULL;
    stack_b.lenght = 0;

    long value;
    int i, j;
    char **split;

    i = 1;
    while (i < argc)
    {
        split = ft_split(argv[i], ' ');
        j = 0;
        while (split[j])
        {
            value = ft_atol(split[j]);
            if (value < INT_MIN || value > INT_MAX)
            {
                free_split(split);
                return (write(2, "Error\n", 6));
            } 
            ft_lstaddback(&stack_a, ft_newlst(value));
            j++;
        }
        free_split(split);
        i++;
	}
    ft_printstack(&stack_a, 'A');
	ft_normalize(&stack_a);
    ft_printstack(&stack_a, 'A');
    radix_sort(&stack_a, &stack_b);
    ft_printstack(&stack_a, 'A');
    ft_clearlst(&stack_a);
    ft_clearlst(&stack_b);
	return 0;
} 


// int main(int argc, char **argv)
// {
//     t_stack stack_a;
//     t_stack stack_b; 

//     stack_a.head = NULL;
//     stack_a.tail = NULL;
//     stack_a.lenght = 0;

//     stack_b.head = NULL;
//     stack_b.tail = NULL;
//     stack_b.lenght = 0;

//     long value;
//     int i;
//     int j;
//     char **split;

    
//     i = 1;
//     while (i < argc)
//     {
//         split = ft_split(argv[i], ' ');
//         j = 0;
//         while (split[j])
//         {
//             value = ft_atol(split[j]);
//             if (value < INT_MIN || value > INT_MAX)
//             {
//                 free_split(split);
//                 return (write(2, "Error\n", 6));
//             }
//             ft_lstaddback(&stack_a, ft_newlst(value));
//             j++;
//         }
//         free_split(split);
//         i++;
//     }

//     ft_printstack(&stack_a, 'A'); 
//     ft_printstack(&stack_b, 'B'); 


//     ft_push(&stack_a, &stack_b);

   
// 	ft_ss(&stack_a, &stack_b);
//     ft_printstack(&stack_a, 'A'); 
//     ft_printstack(&stack_b, 'B');
	
// 	ft_rr(&stack_a, &stack_b);
//     ft_printstack(&stack_a, 'A'); 
//     ft_printstack(&stack_b, 'B');

// 	ft_rrr(&stack_a, &stack_b);
//     ft_printstack(&stack_a, 'A'); 
//     ft_printstack(&stack_b, 'B');


//     ft_clearlst(&stack_a);
//     ft_clearlst(&stack_b);

//     return 0;
// }
// int main(int argc, char **argv)
// {
//     t_stack stack_a;

//     stack_a.head = NULL;
//     stack_a.tail = NULL;
//     stack_a.lenght = 0;

//     //long value;
//     //int i = 1;
//     //int j;
//     //char **split;

//     stack_a = ft_checkargs(argc, argv);
//     if (stack_a.lenght == 0)  
//     {
//         write(2, "Error\n", 6);
//         return 1;
//     }
//     if (!ft_createstack(&stack_a, argv))
//     {
//         write(2, "Error\n", 6);
//         return 1;
//     }
//     ft_printstack(&stack_a, 'A');
//     ft_swap(&stack_a, 1);
//     ft_printstack(&stack_a, 'A');
//     ft_clearlst(&stack_a);
//     return 0;
// }
// 
// int main(int argc, char **argv)
// {
    
// 	t_stack stack_a;
// 	t_stack stack_b;
//     stack_a.head = NULL;
//     stack_a.tail = NULL;
//     stack_a.lenght = 0;

//     stack_b.head = NULL;
//     stack_b.tail = NULL;
//     stack_b.lenght = 0;
	
//     long value;
//     int i, j;
//     char **split;

//     i = 1;
//     while (i < argc)
//     {
//         split = ft_split(argv[i], ' ');
//         j = 0;
//         while (split[j])
//         {
//             value = ft_atol(split[j]);
//             if (value < INT_MIN || value > INT_MAX)
//             {
//                 free_split(split);
//                 return (write(2, "Error\n", 6));
//             }
//             ft_lstaddback(&stack_a, ft_newlst(value));
//             j++;
//         }
//         free_split(split);
//         i++;
//     }
//     printf("Pilha A antes da ordenação:\n");
//     ft_printstack(&stack_a, 'A');
//     radix_sort(&stack_a, &stack_b);
//     printf("Pilha A após a ordenação:\n");
//     ft_printstack(&stack_a, 'A');
//     while (stack_a.head != NULL)
//     {
//         t_node *temp = stack_a.head;
//         stack_a.head = stack_a.head->next;
//         free(temp);
//     }
//     while (stack_b.head != NULL)
//     {
//         t_node *temp = stack_b.head;
//         stack_b.head = stack_b.head->next;
//         free(temp);
//     }
//     return 0;
// }
// int main() {
//     t_stack stack_a;
// 	t_stack stack_b;
//     stack_a.head = NULL;
//     stack_a.tail = NULL;
//     stack_a.lenght = 0;

//     stack_b.head = NULL;
//     stack_b.tail = NULL;
//     stack_b.lenght = 0;


//     // Inserir alguns valores na pilha A
//     ft_push(&stack_a, value, 1);

//     printf("Pilha A antes de aplicar radix_sort: ");
//     ft_printstack(&stack_a, 'A');

//     // Aplicando o algoritmo radix_sort
//     radix_sort(&stack_a, &stack_b);

//     printf("Pilha A após aplicar radix_sort: ");
//     ft_printstack(&stack_a, 'A');

//     return 0;
// }
