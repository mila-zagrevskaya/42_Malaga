/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:44:02 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/05/02 15:42:59 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief strrchr is a function used to find the last occurrence
 * of a character within a string.
 * @brief Searches for the last occurrence of a specific character
 * (ch) within a null-terminated string (str).
 * @brief Useful for extracting filenames with extensions, parsing paths,
 * or finding specific delimiters within strings.
 * 
 * @param s 
 * @param c 
 * @return char* 
 */

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*res;
	char			cc;

	cc = (char) c;
	res = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			res = (char *) &s[i];
		i++;
	}
	if (s[i] == cc)
		res = (char *) &s[i];
	return (res);
}

// int	main(void)
// {
// 	char	*str;
// 	char	target;
// 	char	*last_occurrence;

// 	str = "Hello, world!";
// 	target = 'o';
// 	last_occurrence = ft_strrchr(str, target);
// 	if (last_occurrence)
// 	{
// 		printf("The last occurrence of '%c' is at '%s'\n",
// 			target, last_occurrence);
// 	}
// 	else
// 	{
// 		printf("The character '%c' was not found in the string\n", target);
// 	}
// 	return (0);
// }
