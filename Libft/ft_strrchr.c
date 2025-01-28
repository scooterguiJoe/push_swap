/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:12:31 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/22 17:38:25 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Procura a primeira ocurrencia de um caractere a comecar de tras pra frente (R - reverse)

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = ft_strlen(s);
	if ((unsigned char)c == '\0')
		return (ptr = (char *)s + i);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return (ptr = (char *)s + i);
		i--;
	}
	return (NULL);
}
// int main()
// {
// 	const char *str = "patio";
// 	char d = 't';
// 	char *result = ft_strrchr(str, d);
// 	printf("Result: %s\n", result);
// }
