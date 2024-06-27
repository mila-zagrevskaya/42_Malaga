/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:53:57 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/05/02 15:40:14 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief strnstr is a function used to find the first occurrence 
 * of a substring within a specified number of characters in a string.
 * @brief Searches for the first occurrence of a substring (needle)
 * within a larger string (haystack) up to a certain maximum number
 * of characters (len) to search.
 * @brief Useful for finding partial matches or substrings within a string.
 * Can be used with a limited search length to avoid unnecessary processing
 * 
 * @param haystack 
 * @param needle 
 * @param len 
 * @return char* 
 */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == 0)
		return ((char *) haystack);
	while (haystack[i] && i < len)
	{
		while (haystack[i + j] == needle[j] && haystack[i + j] && i + j < len)
		{
			j++;
			if (needle[j] == 0)
				return ((char *) haystack + i);
		}
		i++;
		j = 0;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*haystack;
// 	char	*needle;
// 	size_t	search_len;
// 	char	*found;

// 	haystack = "Hello, this is a haystack";
// 	needle = "stack";
// 	search_len = 20;
// 	found = ft_strnstr(haystack, needle, search_len);
// 	if (found)
// 	{
// 		printf("The needle '%s' was found at '%s'\n", needle, found);
// 	}
// 	else
// 	{
// 		printf("The needle '%s' was not found within %zu characters\n",
// 			needle, search_len);
// 	}
// 	return (0);
// }
