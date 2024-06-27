/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:21:20 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/05/02 16:04:10 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief tolower - converts an upper-case letter to the corresponding 
 * lower-case letter.
 * 
 * @param c 
 * @return int 
 */

int	ft_tolower(int c)
{
	if ((c >= 65 && c <= 90))
		c += 32;
	return (c);
}

// int	main(void)
// {
// 	char	ch;
// 	char	lower_ch;

// 	ch = 'A';
// 	lower_ch = ft_tolower(ch);
// 	printf("Original character: '%c'\n", ch);
// 	printf("Lowercase character: '%c'\n", lower_ch);
// 	return (0);
// }
