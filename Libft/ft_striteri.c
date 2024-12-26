/* ************************************************************************** */
/*	                                                                          */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:56:59 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/04/26 14:07:48 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief A cada carácter de la string ’s’, aplica la función ’f’ dando como
 * parámetros el índice de cada carácter dentro de ’s’ y la dirección del 
 * propio carácter, que podrá modificarse si es necesario
 * 
 * @param s La string que iterar
 * @param f La función a aplicar sobre cada carácter
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	ind;

	if (s || f)
	{
		ind = 0;
		while (s[ind])
		{
			(*f)(ind, &s[ind]);
			ind++;
		}
	}
}

// void	capitalize_character(unsigned int i, char *c)
// {
// 	if (*c >= 'a' && *c <= 'z')
// 	{
// 		*c = *c - 'a' + 'A';
// 	}
// }

// int	main(void)
// 	{
// 	char	str[] = "hello, world!";

// 	ft_striteri(str, capitalize_character);
// 	printf("Capitalized string: %s\n", str);
// 	return (0);
// }
