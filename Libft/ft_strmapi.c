/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:24:43 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/05/02 14:59:58 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief A cada carácter de la string ’s’, aplica la función ’f’ dando como
 * parámetros el índice de cada carácter dentro de ’s’ y el propio carácter
 * Genera una nueva string con el resultado del uso sucesivo de ’f’
 * 
 * @param s La string que iterar
 * @param f La función a aplicar sobre cada carácter
 * @return char* La string creada tras el correcto uso de ’f’ sobre
 * cada carácter
 * NULL si falla la reserva de memoria
 */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*new_string;
	size_t		ind;

	if (!s || !f)
		return (NULL);
	ind = 0;
	new_string = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new_string)
		return (NULL);
	while (s[ind] != '\0')
	{
		new_string[ind] = f(ind, s[ind]);
		ind++;
	}
	new_string[ind] = '\0';
	return (new_string);
}

// char	toupper_function(unsigned int i, char c)
// {
// 	return ((char)toupper(c));
// }

// int	main(void)
// {
// 	char	*str;
// 	char	*new_str;

// 	str = "Hello, world!";
// 	new_str = ft_strmapi(str, toupper_function);
// 	if (!new_str)
// 	{
// 		printf("Error creating new string\n");
// 		return (1);
// 	}
// 	printf("Original string: %s\n", str);
// 	printf("New string: %s\n", new_str);
// 	free(new_str);
// 	return (0);
// }
