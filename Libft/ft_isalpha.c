/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:32:25 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/04/30 14:06:52 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The isalpha() function tests for any character for 
 * which isupper(3) or islower(3) is true.
 * 
 * @param c 
 * @return int 
 */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
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
// 	ch4 = '@';
// 	printf("'%c' is alphabetic: %d\n", ch1, ft_isalpha(ch1));
// 	printf("'%c' is alphabetic: %d\n", ch2, ft_isalpha(ch2));
// 	printf("'%c' is alphabetic: %d\n", ch3, ft_isalpha(ch3));
// 	printf("'%c' is alphabetic: %d\n", ch4, ft_isalpha(ch4));
// }
