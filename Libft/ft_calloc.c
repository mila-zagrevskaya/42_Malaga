/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:24:48 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/04/22 13:16:36 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

/**
 * @brief Is a function used for dynamic memory allocation with initialization
 * Allocates a specific number of elements in memory.
 * Initializes each element to zero (\0).
 * 
 * @param count 
 * @param size 
 * @return void* 
 */

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	while (i < count * size)
		tmp[i++] = 0;
	return (tmp);
}

// int	main(void)
// {
// 	int	*ptr;

// 	ptr = calloc(5, sizeof(int));
// 	if (ptr != NULL)
// 	{
// 		printf("Место для 5 плюшевых мишек найдено по адресу: %p\n", ptr);
// 	}
// 	else
// 	{
// 		printf("Не удалось найти место для плюшевых мишек.\n");
// 	}
// 	return (0);
// }
