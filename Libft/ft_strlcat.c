/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:02:12 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/05/02 14:22:44 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief strlcat is a function used for safe string concatenation
 * @brief Appends one string (src) to the end of another string (dst),
 * ensuring the  destination buffer (dst) isn't overflowed

 * @brief Prevents buffer overflow vulnerabilities that can occur with strcat.
 * Useful for safely combining strings without corrupting memory
 * @param dst 
 * @param src 
 * @param dstsize 
 * @return size_t 
 */

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	res;

	i = 0;
	while (dst[i] != '\0')
		++i;
	res = 0;
	while (src[res] != '\0')
		++res;
	if (dstsize <= i)
		res += dstsize;
	else
		res += i;
	j = 0;
	while (src[j] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (res);
}

// int	main(void)
// {
// 	char	*destination;
// 	char	*source;
// 	size_t	new_length;

// 	destination = malloc(20 * sizeof(char));
// 	source = " This is the string.";
// 	new_length = ft_strlcat(destination, "Hello, ", 20);
// 	if (new_length > 19)
// 	{
// 		printf("Warning: Destination string might be truncated\n");
// 	}
// 	printf("Combined string: %s\n", destination);
// 	printf("New length (returned by ft_strlcat): %zu\n", new_length);
// 	free(destination);
// 	return (0);
// }
