/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:25:05 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/06/26 18:44:33 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief This function counts the number of hexadecimal digits required to
 * represent a non-negative unsigned integer (unsigned int).
 * 
 * @param num A non-negative unsigned integer for which you want to calculate
 * the length of the hexadecimal representation.
 * @return int An integer representing the number of hexadecimal
 * digits in num.
 */
int	ft_hex_len(unsigned	int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_print_hex(unsigned int num, const char format)
{
	if (num >= 16)
	{
		ft_print_hex(num / 16, format);
		ft_print_hex(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_putchar((num + '0'));
		else
		{
			if (format == 'x')
				ft_putchar((num - 10 + 'a'));
			if (format == 'X')
				ft_putchar((num - 10 + 'A'));
		}
	}
}

/*%X Prints a hexadecimal (base 16) number
in uppercase.*/
/*%x Prints a hexadecimal (base 16) number
in lower case.*/
int	ft_puthex(unsigned int num, const char format)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_print_hex(num, format);
	return (ft_hex_len(num));
}
