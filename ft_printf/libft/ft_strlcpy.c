/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:56:24 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/05/02 14:27:07 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief is a function used for safe string copying
 * @brief Copies a source string (src) to a destination string (dst),
 * ensuring the destination buffer (dst) isn't overflowed.
 * 
 * @param dst 
 * @param src 
 * @param dstsize 
 * @return size_t 
 */

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	res;

	i = 0;
	res = 0;
	while (src[res])
		res++;
	if (dstsize < 1)
		return (res);
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (res);
}

// int	main(void)
// {
// 	char	*destination;
// 	char	*source;
// 	size_t	copied_length;

// 	destination = malloc(20 * sizeof(char));
// 	source = "This is a longer source string.";
// 	copied_length = ft_strlcpy(destination, source, 20);
// 	printf("Copied characters: %zu\n", copied_length);
// 	printf("Destination string: %s\n", destination);
// 	free(destination);
// 	return (0);
// }
