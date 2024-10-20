/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 18:24:44 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/06/26 18:56:01 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


/**
 * @brief  The function uses a series of if statements to check the value of
 * the format character and call appropriate printing functions based
 * on the format specifier:
 * 'c': Prints a character using ft_putchar.
 * 's': Prints a string using ft_putstr.
 * 'p': Prints a pointer address using ft_putptr.
 * 'd': Prints a signed integer using ft_printnbr.
 * 'i': Treated the same as 'd'.
 * 'u': Prints an unsigned  decimal number using ft_putdns.
 * 'x': Prints a hexadecimal number in lowercase using ft_puthex.
 * 'X': Prints a hexadecimal number in uppercase using ft_puthex.
 * '%': Prints a literal percent sign using ft_putchar.
 * After processing the format specifier, the function returns the total
 * number of characters printed (print_length).
 * 
 * @param arg 
 * @param wrd 
 * @return int 
 */
static int	ft_sel_flag(va_list *arg, const char wrd)
{
	int	wid;

	wid = 0;
	if (wrd == 'c')
		wid += ft_putchar(va_arg(*arg, int));
	else if (wrd == 's')
		wid += ft_putstr(va_arg(*arg, char *));
	else if (wrd == 'p')
		wid += ft_putptr(va_arg(*arg, unsigned long long));
	else if ((wrd == 'd') || (wrd == 'i'))
		wid += ft_putnbr(va_arg(*arg, int));
	else if (wrd == 'u')
		wid += ft_putdns(va_arg(*arg, unsigned int));
	else if ((wrd == 'x') || (wrd == 'X'))
		wid += ft_puthex(va_arg(*arg, unsigned int), wrd);
	else if (wrd == '%')
		wid += ft_putchar(wrd);
	else
		wid += ft_putchar(wrd);
	return (wid);
}

/**
 * @brief 
 * 
 * @param const_char*str This is a pointer to a constant format string
 * that can contain regular characters and format specifiers starting with %. 
 * @param ... - This is a list of variable arguments. It allows you to
 * pass an arbitrary number of arguments to the function after the format string
 * @return int 
 */
int	ft_printf(char const *str, ...)
{
	int			num;
	int			wid;
	va_list		arg;

	num = 0;
	wid = 0;
	va_start(arg, str);
	while (str[num])
	{
		if (str[num] == '%')
		{
			wid += ft_sel_flag(&arg, str[num + 1]);
			num++;
		}
		else
			wid += (int) write(1, &str[num], 1);
		num++;
	}
	va_end(arg);
	return (wid);
}
