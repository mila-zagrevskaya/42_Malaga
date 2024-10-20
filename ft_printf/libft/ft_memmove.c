/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:45:05 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/05/01 15:06:43 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	make_copy(unsigned char *dst, const unsigned char *src, size_t len)
{
	size_t	i;

	if (src < dst)
	{
		i = len;
		while (i > 0)
		{
			i--;
			dst[i] = src[i];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			dst[i] = src[i];
			i++;
		}
	}
}

/**
 * @brief The memmove() function copies len bytes from string src to string dst
 * The two strings may overlap; the copy is always done in 
 * a non-destructive manner
 *
 * @brief Use ft_memmove when you need to copy memory that might overlap,
 * unlike memcpy which can lead to data corruption in such scenarios.
 * Ensure the destination memory has sufficient space to hold the copied
 * data to avoid memory issues.
 * 
 * @brief The memmove() function returns the original value of dst
 * 
 * @param dst copies to string dst
 * @param src copies from string src
 * @param len function copies len bytes
 * @return void* The memmove() function returns the original value of dst.
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*cdst;
	const unsigned char	*csrc;

	if (!src && !dst)
		return (0);
	cdst = (unsigned char *) dst;
	csrc = (const unsigned char *) src;
	make_copy(cdst, csrc, len);
	return (dst);
}

// int	main(void)
// {
// 	char	source_data[] = "Hello, world!";
// 	char	destination_data[20];
// 	size_t	num_bytes_to_copy;

// 	num_bytes_to_copy = sizeof(source_data);
// 	printf("Destination data (before handling): %s\n", destination_data);
// 	ft_memmove(destination_data, source_data, num_bytes_to_copy);
// 	printf("Destination data (after overlap handling): %s\n", destination_data);
// 	return (0);
// }
