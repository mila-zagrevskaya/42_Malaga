/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:08:25 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/05/02 14:28:53 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief strlen is a function used to determine the length of
 * a null-terminated string
 * @brief Calculates the length of a string, excluding the null terminator (\0)
 * 
 * @param s 
 * @return size_t 
 */

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// int	main(void)
// {
// 	char	*str;
// 	size_t	length;

// 	str = "Hello, world!";
// 	length = ft_strlen(str);
// 	printf("The string '%s' has a length of %zu characters.\n", str, length);
// 	return (0);
// }
