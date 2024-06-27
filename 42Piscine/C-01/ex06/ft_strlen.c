/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 14:24:49 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/03/15 14:46:09 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

/*
int	main(void)
{
	char	*string;

	string = "Lorem ipsum";
	printf("%s\n", string);
	printf("%d\n", ft_strlen(string));
	return (0);
}
*/
