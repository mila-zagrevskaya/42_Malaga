/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:11:38 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/05/02 15:50:35 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The isalnum() function tests for any character
 * for which isalpha(3) or isdigit(3) is true.
 * The value of the argument must be representable 
 * as an unsigned char or the value of EOF.
 * 
 * @param c 
 * @return int 
 */

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
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

// 	printf("'%c' is alphanumeric: %d\n", ch1, ft_isalnum(ch1));
// 	printf("'%c' is alphanumeric: %d\n", ch2, ft_isalnum(ch2));
// 	printf("'%c' is alphanumeric: %d\n", ch3, ft_isalnum(ch3));
// 	printf("'%c' is alphanumeric: %d\n", ch4, ft_isalnum(ch4));
// }
