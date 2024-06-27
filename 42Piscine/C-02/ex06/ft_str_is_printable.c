/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:22:31 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/03/20 18:22:37 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	printf("%d", ft_str_is_printable(("ABCDEFGHIGKLMNOP")));
	printf("\n%d", ft_str_is_printable(("§`/?| ,_{}")));
	printf("\n%d", ft_str_is_printable(("±§>~=_` |/")));
	printf("\n%d", ft_str_is_printable(("")));
	return (0);
}
*/