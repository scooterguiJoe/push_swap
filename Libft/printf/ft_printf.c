/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:20:10 by guvascon          #+#    #+#             */
/*   Updated: 2025/01/27 17:44:39 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (!format)
		return (-1);
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
int main()
{
	char *a = NULL;

	ft_printf("Character: %c\n", ' ');
	printf("Character: %c\n", ' ');
	printf("\n");

	ft_printf("%s\n", "Hello World!");
	printf("%s\n", "Hello World!");
	printf("\n");

	ft_printf("%p\n", a);
	printf("%p\n", a);
	printf("\n");


	ft_printf("Decimal: %d\n", ft_printf(NULL));
	printf("Decimal: %d\n", printf(NULL));
	printf("\n");

	ft_printf("Decimal base 10: %i\n", 42);
	printf("Decimal base 10: %i\n", 42);
	printf("\n");

	ft_printf("Decimal sem sinal: %u\n", 42);
	printf("Decimal sem sinal: %u\n", 42);
	printf("\n");

	ft_printf("Hexadecimal (minusculas): %x\n", 42);
	printf("Hexadecimal (minusculas): %x\n", 42);
	printf("\n");

	ft_printf("Hexadecimal (maisculas): %X\n", 42);
	printf("Hexadecimal (maisculas): %X\n", 42);
	printf("\n");

	ft_printf("sinal de porcentagem: %%\n");
	printf("sinal de porcentagem: %%\n");
	printf("\n");
}