/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:44:51 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/03/20 13:44:58 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}

/*
int	main(void)
{
	printf("%d", ft_str_is_alpha("abcdefghijklmnop"));
	printf("\n%d", ft_str_is_alpha("ab1cdef1ghijklmnop"));
	printf("\n%d", ft_str_is_alpha("=_213abcdefghijklmnop"));
	printf("\n%d", ft_str_is_alpha(""));
	return (0);
}
*/
