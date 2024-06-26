/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:27:31 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/05/02 13:50:44 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief he function locates the first occurrence of c (converted to a char)
 * in the string pointed to by s. The terminating null character is considered
 * to be part of the string; therefore if c is `\0', 
 * the funcions locate the terminating `\0'.
 * 
 * @brief returns a pointer to the located character, 
 * or NULL if the character does not appear in the string.
 *
 * @param s 
 * @param c 
 * @return char* 
 */

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;

	cc = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == cc)
		return ((char *) &s[i]);
	return (NULL);
}

// int	main(void)
// {
// 	char	*str;
// 	char	target;
// 	char	*found;

// 	str = "Hello, world!";
// 	target = 'o';
// 	found = ft_strchr(str, target);
// 	if (found)
// 	{
// 		printf("Character '%c' was found at index %ld\n", target, found - str);
// 	}
// 	else
// 	{
// 		printf("The character '%c' was not found in the string\n", target);
// 	}
// 	return (0);
// }
