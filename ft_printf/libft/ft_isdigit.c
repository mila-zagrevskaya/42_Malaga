/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:24:22 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/04/30 14:30:56 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The isdigit() function return a non-zero value if the
 * character passed as an int parameter is a decimal digit character (0 - 9).
* If the character is not a decimal digit character,
* the isdigit() function return 0.
 * 
 * @param c 
 * @return int 
 */

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// int	main(void)
// {
// 	char	ch1;
// 	char	ch2;
// 	char	ch3;
// 	char	ch4;

// 	ch1 = '0';
// 	ch2 = '5';
// 	ch3 = '9';
// 	ch4 = 'a';
// 	printf("'%c' is a digit: %d\n", ch1, ft_isdigit(ch1));
// 	printf("'%c' is a digit: %d\n", ch2, ft_isdigit(ch2));
// 	printf("'%c' is a digit: %d\n", ch3, ft_isdigit(ch3));
// 	printf("'%c' is a digit: %d\n", ch4, ft_isdigit(ch4));
// }
