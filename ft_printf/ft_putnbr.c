/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdns.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:42:03 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/05/16 16:03:02 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>

/*%d Prints a decimal number (base 10).*/
/*%i Prints a base 10 integer.*/

/**
 * @brief Converts an integer (n) to a string using ft_itoa.
 * Prints the resulting string to standard output using ft_printstr.
 * Frees the memory allocated for the string.
 * Returns the number of characters printed.
 * 
 * @param n This is the integer to be output
 * @return int 
 */
int	ft_putnbr(int n)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoa(n);
	len = ft_putstr(num);
	free(num);
	return (len);
}
