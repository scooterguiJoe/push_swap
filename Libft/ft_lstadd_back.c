/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:33:53 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/22 16:40:45 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//adiciona um novo elemento no final de uma linked list
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
	}
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}
int main()
{
	t_list	*list = NULL;
	t_list	*node1;
	t_list	*node2;
	
	node1 = ft_lstnew("node1");
	node2 = ft_lstnew("node2");
	
	ft_lstadd_back(&list, node1);
	ft_lstadd_back(&list, node2);
	printf("Conteúdos da lista:\n");
	
	t_list *current = list;
	while (current != NULL)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	while (list != NULL)
	{
		t_list *temp = list;
		list = list->next;
		free(temp);
	}
	return (0);
}
