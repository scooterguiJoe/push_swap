/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:25:37 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/22 15:28:58 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*obj;

	if (!lst || !f || !del)
		return (NULL);
	list = NULL;
	while (lst)
	{
		obj = ft_lstnew(f(lst -> content));
		if (!obj)
		{
			ft_lstclear(&list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, obj);
		lst = lst->next;
	}
	return (list);
}
// int main()
// {
//     t_list *list = NULL;
//     t_list *mapped_list;
	
//     t_list *node1 = ft_lstnew(malloc(sizeof(int)));
//     *((int *)node1->content) = 1;
//     ft_lstadd_back(&list, node1);

//     t_list *node2 = ft_lstnew(malloc(sizeof(int)));
//     *((int *)node2->content) = 2;
//     ft_lstadd_back(&list, node2);

//     t_list *node3 = ft_lstnew(malloc(sizeof(int)));
//     *((int *)node3->content) = 3;
//     ft_lstadd_back(&list, node3);
	
//     mapped_list = ft_lstmap(list, double_content, del);

//     t_list *temp = mapped_list;
//     while (temp)
//     {
//         printf("%d -> ", *((int *)temp->content));
//         temp = temp->next;
//     }

//     ft_lstclear(&list, del);
//     ft_lstclear(&mapped_list, del);

//     return 0;
// }