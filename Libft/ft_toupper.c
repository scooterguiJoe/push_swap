/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:42:51 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/21 13:44:06 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int n)
{
	if (n >= 97 && n <= 122)
	{
		n -= 32;
	}
	return (n);
}
// int main()
// {
// 	char i = 'a';
// 	printf("%c\n", ft_toupper(i));
// 	return (0);
// }
