/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:07:20 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/04/30 14:01:23 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The atoi() function converts a string to its int representation.
 * 
 * @param str 
 * @return int 
 */

int	ft_atoi(const char *str)
{
	int	res;
	int	negative;

	negative = 1;
	res = 0;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t'
			|| *str == '\v' || *str == '\f' || *str == '\r'))
		++str;
	if (*str == '-')
		negative = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (*str && *str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - 48);
		++str;
	}
	return (res * negative);
}

// int	main()
// {
// 	char str1[] = "  -123";
// 	char str2[] = "109";
// 	char str3[] = "  hello";
// 	int number1 = ft_atoi(str1);
// 	int number2 = ft_atoi(str2);
// 	int number3 = ft_atoi(str3);

// 	printf("Converted number (str1): %d\n", number1);
// 	printf("Converted number (str2): %d\n", number2);
// 	printf("Converted number (str3): %d\n", number3);
// }