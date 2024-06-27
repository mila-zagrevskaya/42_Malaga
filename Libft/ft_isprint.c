/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:40:49 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/04/30 14:34:25 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The isprint() function returns a non-zero value if the character
 * passed as an int parameter is a printing character
 *
 * @brief If the character is not a printing character, the 
 * isprint() function returns 0
 *
 * @brief The printing characters are all character between
 * decimal 32 and decimal 126
 * 
 * @param c 
 * @return int 
 */

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// int	main(void)
// {
// 	char	ch1;
// 	char	ch2;
// 	char	ch3;
// 	char	ch4;
// 	char	ch5;

// 	ch1 = ' ';
// 	ch2 = 'a';
// 	ch3 = '9';
// 	ch4 = '\n';
// 	ch5 = 127;
// 	printf("'%c' is printable: %d\n", ch1, ft_isprint(ch1));
// 	printf("'%c' is printable: %d\n", ch2, ft_isprint(ch2));
// 	printf("'%c' is printable: %d\n", ch3, ft_isprint(ch3));
// 	printf("'%c' is printable: %d\n", ch4, ft_isprint(ch4));
// 	printf("'%c' is printable: %d\n", ch5, ft_isprint(ch5));
// }
