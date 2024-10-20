/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 17:02:08 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/05/01 15:11:39 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Is a function used to fill a block of memory with a specific value
 * @brief Sets a specified number of bytes in memory to a particular value
 * @brief Useful for initializing memory blocks to a known 
 * value (e.g., zeros, a specific character).
 * Can be used to clear memory before reuse.
 * The memset() function returns its first argument.
 * @brief The memset() function writes len bytes of value c (converted to an
 * unsigned char) to the string b.
 *
 * @param b 
 * @param c 
 * @param len 
 * @return void* function returns its first argument
 */

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp_ptr;

	tmp_ptr = (unsigned char *) b;
	while (len > 0)
	{
		*(tmp_ptr++) = (unsigned char) c;
		len--;
	}
	return (b);
}

// int	main(void)
// {
// 	char	data[10];

// 	ft_memset(data, 'A', sizeof(data));
// 	printf("Filled data: %s\n", data);
// 	return (0);
// }
