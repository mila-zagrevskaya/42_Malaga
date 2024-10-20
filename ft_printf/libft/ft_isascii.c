/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:27:19 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/04/30 14:09:37 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The isascii() function tests for an ASCII character, which
 * is any character between 0 and octal 0177 inclusive.
 * 
 * @param c 
 * @return int 
 */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// int	main(void)
// {
// 	char	ch1;
// 	char	ch2;
// 	char	ch3;
// 	char	ch4;

// 	ch1 = 'A';
// 	ch2 = 'z';
// 	ch3 = '5';
// 	ch4 = 128;
// 	printf("'%c' is ASCII: %d\n", ch1, ft_isascii(ch1));
// 	printf("'%c' is ASCII: %d\n", ch2, ft_isascii(ch2));
// 	printf("'%c' is ASCII: %d\n", ch3, ft_isascii(ch3));
// 	printf("'%c' is ASCII: %d\n", ch4, ft_isascii(ch4));
// }
