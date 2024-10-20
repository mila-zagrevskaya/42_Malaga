/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 19:13:43 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/06/26 19:07:03 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

void	test_char(void)
{
	char	x;
	char	y;
	int		c;
	void	*d;

	x = 'b';
	y = 37;
	c = 126;
	d = NULL;
	printf("=========== Test of character %%c ===========\n\n");
	printf("printf x = 33, y = 37, c = 126, d = NULL: \n");
	printf("x = %c, y = %c, c = %c, d = %p.\n", x, y, c, d);
	ft_printf("my ft_printf x = 33, y = 37, c = 126, d = NULL: \n");
	printf("x = %c, y = %c, c =  %c, d = %p.\n\n", x, y, c, d);
}

void	test_string(void)
{
	char	*str;
	char	*str1;
	int		x;
	int		y;
	char	*s;

	str = "-Hello, how are you?";
	str1 = "-Hello, 42! --- /// ____-12345";
	x = 0;
	y = 0;
	s = NULL;
	if (s == NULL)
		write(1, "(null)\n", 7);
	printf("Test NULL %%s NULL\n");
	x += printf("printf: %s\n", s);
	y += ft_printf("ft_printf: %s\n", s);
	x = 0;
	y = 0;
	printf("printf = %d, ft_printf = %d\n\n", x, y);
	printf("Test str printf:\n %s\n %s\n", str, str1);
	ft_printf("Test str ft_printf:\n %s\n %s\n\n", str, str1);
}

void	test_pointer(void)
{
	int		x;
	int		y;
	int		n;
	char	c;
	void	*p;

	x = 0;
	y = 0;
	n = 50;
	c = 'a';
	p = NULL;
	printf("            Test (void *)&n:          \n\n");
	x += printf("Test printf (void *)&n: %p = %d\n", (void *)&n, n);
	y += ft_printf("Test my ft_printf (void *)&n: %p = %d\n\n", (void *)&n, n);
	x = 0;
	y = 0;
	printf("            Test (void *)&c:           \n\n");
	x += printf("Test printf: %p = %d\n", (void *)&c, c);
	y += ft_printf("Test my ft_printf: %p = %d\n\n", (void *)&c, c);
	x = 0;
	y = 0;
	printf("            Test (void *)&p:           \n\n");
	x += printf("Test printf: %p = %p\n", (void *)&p, p);
	y += ft_printf("Test my ft_printf: %p = %p\n\n", (void *)&p, p);
}

void	test_hexadecimal(void)
{
	unsigned int		num_hex;
	unsigned int		num_hex1;
	int					num;

	num_hex = 2556;
	num_hex1 = 2556;
	num = INT_MIN;

	printf("            hexadecimal printf:           \n\n");
	printf("Number %u in uppercase in hexadecimal: %X\n", num_hex, num_hex);
	printf("Number %u in lowercase in hexadecimal: %x\n", num_hex1, num_hex1);
	printf("           hexadecimal ft_printf:          \n\n");
	ft_printf("Number %u in uppercase in hex: %X\n", num_hex, num_hex);
	ft_printf("Number %u in lowercase in hex: %x\n", num_hex1, num_hex1);
	printf("=============== Test prints an %%u ===============\n\n");
	num_hex = UINT_MAX;
	printf("printf UINT_MAX = %u\n", num_hex);
	ft_printf("ft_printf UINT_MAX = %u\n\n", num_hex);
}

int	main(void)
{
	int	a;
	int	b;
	int	c;

	a = INT_MAX;
	b = INT_MIN;
	c = 42;
	test_char();
	printf("================== Test to string %%s =================\n\n");
	test_string();
	printf("=========== Desimal %%d and integer %%i ============\n\n");
	printf("                      printf:              \n\n");
	printf("Prints a desimal (d): %d, %d, %d\n", a, b, c);
	printf("Prints an integer (i): %i, %i, %i\n\n", a, b, c);
	printf("                     ft_printf:            \n\n");
	ft_printf("Prints a desimal (d): %d %d, %d\n", a, b, c);
	ft_printf("Prints an integer (i): %i, %i, %i\n\n", a, b, c);
	printf("============= Test the void pointer %%p ============\n\n");
	test_pointer();
	printf("================ Hexadecimal %%x %%X ===============\n\n");
	test_hexadecimal();
	printf("=============== Test to print %% =================\n\n");
	printf("printf = %%\n");
	ft_printf("ft_printf = %%\n\n");
	return (0);
}
