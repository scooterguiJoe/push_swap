/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:20:10 by guvascon          #+#    #+#             */
/*   Updated: 2025/03/24 11:03:03 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (!format)
		return (0);
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_print_format(format[i], &args);
		}
		else
			count += write (1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}

//  int main()
// {
//  	ft_printf(" %d\n", -2147483648);
//  	printf(" %d\n", -2147483648);
// }
//  int main()
// {
// 	char *a;
// 	char *b = "0";
// 	a = b;

//  	//%c Imprime um único caractere.
// 	ft_printf("Character: %c\n", '0');
// 	printf("Character: %c\n", '0');
// 	printf("\n");


// 	//%s Imprime uma string
// 	ft_printf("Hello, %s!\n", "World");
// 	printf("Hello, %s!\n", "World");
// 	printf("\n");

// 	//%p O endereço do ponteiro void *
// 	//deve ser impresso em formato hexadecimal.
// 	ft_printf("endereco: %p\n", a);
// 	printf("endereco: %p\n", a);
// 	printf("\n");


// 	//%d Imprime um número decimal (base 10).
// 	ft_printf("Decimal: %d\n", 42);
// 	printf("Decimal: %d\n", 42);
// 	printf("\n");

// 	//%i Imprime um inteiro em base 10.
// 	ft_printf("Decimal base 10: %i\n", 42);
// 	printf("Decimal base 10: %i\n", 42);
// 	printf("\n");

// 	//%u Imprime um número decimal (base 10) sem sinal.
// 	ft_printf("Decimal sem sinal: %u\n", 42);
// 	printf("Decimal sem sinal: %u\n", 42);
// 	printf("\n");

// 	//%x Imprime um número em formato hexadecimal (base 16) em minúsculas.
// 	ft_printf("Hexadecimal (minusculas): %x\n", 600);
// 	printf("Hexadecimal (minusculas): %x\n", 600);
// 	printf("\n");

// 	//%X Imprime um número em formato hexadecimal (base 16) em maiúsculas.
// 	ft_printf("Hexadecimal (maisculas): %X\n", 42);
// 	printf("Hexadecimal (maisculas): %X\n", 42);
// 	printf("\n");

// 	//%% Imprime um sinal de porcentagem
// 	ft_printf("sinal de porcentagem: %%\n");
// 	printf("sinal de porcentagem: %%\n");
// 	printf("\n");

// } 