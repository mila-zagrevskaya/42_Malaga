/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:14:21 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/05/02 14:01:21 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The toupper() function converts a lower-case letter to
 * the corresponding upper-case letter.
 * 
 * @param c 
 * @return int 
 */

int	ft_toupper(int c)
{
	if ((c >= 97 && c <= 122))
		c -= 32;
	return (c);
}

// int	main(void)
// {
// 	char	ch;
// 	int		char_code;

// 	ch = 'b';
// 	char_code = ch;
// 	printf("Character: %c (ASCII code: %d)\n", ch, char_code);
// 	char_code = ft_toupper(char_code);
// 	printf("Uppercase Character: %c (ASCII code: %d)\n",
// 		(char)char_code, char_code);
// 	return (0);
// }
