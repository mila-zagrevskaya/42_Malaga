/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:14:10 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/04/30 15:04:34 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The memcmp() function compares byte string s1 against byte string s2
 * Both strings are assumed to be n bytes long.
 * 
 * @brief The memcmp() function returns zero if the two strings are identical,
 * otherwise returns the difference between the first two differing bytes
 *  
 * @param s1 
 * @param s2 
 * @param n 
 * @return int 
 */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	*ptr2;

	if (n == 0)
		return (0);
	ptr = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (*ptr == *ptr2 && ++i < n)
	{
		ptr++;
		ptr2++;
	}
	return ((int)(*ptr - *ptr2));
}

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;
// 	size_t	size;
// 	int		result;

// 	str1 = "Hello, world!";
// 	str2 = "Hello, Worl!";
// 	size = strlen(str1);
// 	result = ft_memcmp(str1, str2, size);
// 	if (result == 0)
// 	{
// 		printf("Memory areas are identical\n");
// 	}
// 	else
// 	{
// 		printf("Memory areas differ. Difference at index: %ld, value: %d\n",
// 			(long int)(strchr(str1, result) - str1), result);
// 	}
// }
