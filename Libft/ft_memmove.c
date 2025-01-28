/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:13:40 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/22 12:19:31 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;

	if (!dest && !src)
		return (dest);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	s = (unsigned char *) src;
	d = (unsigned char *) dest;
	while (n--)
		d[n] = s[n];
	return (dest);
}
// int main() 
// {
//     char str[] = "Hello, World!";
    
//     ft_memmove(str + 7, str, 5);
//     printf("Resultado: %s\n", str);
//     return 0;
// }
