/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:59:36 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/03/19 14:59:47 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	src[] = "lorem";
	char	src1[] = "lorem";
	char	dest[] = "Wo";
	char	dest1[] = "Won";

	printf("%s", ft_strcpy(dest, src));
	printf("\n%s", strcpy(dest1, src1));
	return (0);
}
*/
