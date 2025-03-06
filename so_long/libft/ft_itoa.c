/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:41:03 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/04/30 14:37:03 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief counting the number of characters representing a number
 * 
 * @param nbr 
 * @return int the length of a string
 */
static int	nbr_len(int nbr)
{
	int	len;

	len = 0;
	if (nbr < 1)
		len++;
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

/**
 * @brief determines the sign of the number by checking if it is negative
 * It calculates the length of the resulting string by counting the number
 * of digits in the absolute value of the integer
 * 
 * @param n 
 * @return long long 
 */
static long long	abs_val(long long n)
{
	long long	nb;

	nb = 1;
	if (n < 0)
		nb *= -n;
	else
		nb *= n;
	return (nb);
}

/**
 * @brief Memory is allocated to store the resulting string,
 * including space for the sign and the null-terminator
 * 
 * @param n 
 * @return char* 
 */
static char	*str_new(size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	return (str);
}
/**
 * @brief Utilizando malloc(3), genera una string que
 * represente el valor entero recibido como argumento.
 * Los números negativos tienen que gestionarse.
 * 
 * @param n el entero a convertir
 * @return char* La string que represente el número.
 * NULL si falla la reserva de memoria
 */

char	*ft_itoa(int n)
{
	unsigned int	nbr;
	int				sign;
	int				len;
	char			*str;

	sign = 0;
	if (n < 0)
		sign = 1;
	len = nbr_len(n);
	str = str_new(len);
	if (!str)
		return (NULL);
	*(str + len) = '\0';
	nbr = abs_val(n);
	while (len--)
	{
		*(str + len) = 48 + nbr % 10;
		nbr /= 10;
	}
	if (sign)
		*(str) = 45;
	return (str);
}
