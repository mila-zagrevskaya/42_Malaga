/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:21:03 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/04/30 15:09:02 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The memcpy() function copies n bytes from memory area src 
 * to memory area dst.  If dst and src overlap, behavior is undefined.
 * Applications in which dst and src might overlap
 * should use memmove(3) instead
 * 
 * @brief The memcpy() function returns the original value of dst.
 *
 * @param dst 
 * @param src 
 * @param n 
 * @return void* 
 */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;

	if (dst == (void *)0 && src == (void *)0)
		return (dst);
	tmp_dst = (unsigned char *) dst;
	tmp_src = (unsigned char *) src;
	while (n > 0)
	{
		*(tmp_dst++) = *(tmp_src++);
		n--;
	}
	return (dst);
}

// int	main(void)
// {
// 	char	source_data[] = "Hello, world!";
// 	char	destination_data[20];
// 	size_t	num_bytes_to_copy;

// 	num_bytes_to_copy = sizeof(source_data);
// 	ft_memcpy(destination_data, source_data, num_bytes_to_copy);
// 	printf("Destination data: %s\n", destination_data);
// }
