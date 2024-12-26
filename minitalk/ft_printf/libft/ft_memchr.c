/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:44:46 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/04/30 14:59:26 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The memchr() function locates the first occurrence of c
 * (converted to an unsigned char) in string s.
 * 
 * @brief The memchr() function returns a pointer to the byte located,
 * or NULL if no such byte exists within n bytes.
 *
 * @param s 
 * @param c 
 * @param n 
 * @return void* 
 */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (++i <= n)
		if (*(ptr++) == (unsigned char)c)
			return ((void *)--ptr);
	return (0);
}

// int	main(void)
// {
// 	char	*data;
// 	int		target;
// 	size_t	size;
// 	void	*result;

// 	data = "Hello, world!";
// 	target = 'w';
// 	size = strlen(data);
// 	result = ft_memchr(data, target, size);
// 	if (result)
// 	{
// 		printf("Found at index: %ld\n",
// 		(long int)((char *)result - data), target);
// 	}
// 	else
// 	{
// 		printf("Character 'o' not found in the data\n");
// 	}
// }
