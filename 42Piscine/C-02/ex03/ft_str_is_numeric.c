/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:01:38 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/03/20 14:01:42 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			return (0);
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	printf("%d", ft_str_is_numeric("0123456789"));
	printf("\n%d", ft_str_is_numeric("0123f56789"));
	printf("\n%d", ft_str_is_numeric("=_213abcdefghijklmnop"));
	printf("\n%d", ft_str_is_numeric(""));
	return (0);
}
*/
