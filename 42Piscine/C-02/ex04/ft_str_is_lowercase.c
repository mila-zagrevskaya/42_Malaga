/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:13:29 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/03/20 14:13:31 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	printf("%d", ft_str_is_lowercase("abcdefghijklmnop"));
	printf("\n%d", ft_str_is_lowercase("abcFdefY1ghijklmnop"));
	printf("\n%d", ft_str_is_lowercase("=_213abcReVhijklmnop"));
	printf("\n%d", ft_str_is_lowercase(""));
	return (0);
}
*/
