/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:55:28 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/05/02 15:33:41 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief is a function used for comparing a specific portion of two strings
 * @brief Compares a specified number of characters (n) from
 * two strings (str1 and str2).
 * Determines if they are lexicographically (alphabetically) equal.
 *
 * @brief Useful when you only need to compare a certain part of a string.
 * Can be used for partial string matching or comparisons with
 * fixed-length fields
 *
 * @param s1 
 * @param s2 
 * @param n 
 * @return int 
 */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((unsigned char) s1[i] != (unsigned char) s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;
// 	int		comparison;
// 	int		num;

// 	str1 = "Hello, world!";
// 	str2 = "Hello, Worl!";
// 	num = 7;
// 	comparison = ft_strncmp(str1, str2, num);
// 	if (comparison > 0)
// 	{
// 		printf("'%s' comes lexicographically after '%s'\n", str1, str2);
// 	}
// 	else if (comparison < 0)
// 	{
// 		printf("'%s' comes lexicographically before '%s'\n", str1, str2);
// 	}
// 	else
// 	{
// 		printf("The strings are equal up to %d characters\n", num);
// 	}
// 	return (0);
// }
