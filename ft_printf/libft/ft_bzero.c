/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 17:49:28 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/04/30 14:01:29 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Is a function used to zero (fill with zeros) a block of memory
 * @brief Clears a specific area of memory by setting
 *	 all the bytes within that area to zero (\0)
 * 
 * @param s 
 * @param n 
 */

void	ft_bzero(void *s, size_t n)
{
	char	*tmp_ptr;

	tmp_ptr = (char *) s;
	while (n > 0)
	{
		*(tmp_ptr++) = 0;
		n--;
	}
}

// int	main(void)
// {
// 	char	my_string[20] = "Hello";

// 	printf("Before zeroing: %s\n", my_string);
// 	ft_bzero(my_string, sizeof(my_string));
// 	printf("After zeroing: %s\n", my_string);
// }
