/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:04:20 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/05/02 13:51:07 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The function allocates sufficient memory for a copy of the string s1
 * does the copy, and returns a pointer to it
 * 
 * @param s1 
 * @return char* 
 */

char	*ft_strdup(const char *s1)
{
	char	*new;
	int		i;
	int		size;

	size = 0;
	while (s1[size])
		++size;
	new = malloc(sizeof(char) * (size + 1));
	if (!(new))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

// int	main(void)
// {
// 	char	*original;
// 	char	*copy;

// 	original = "Hello world!";
// 	copy = ft_strdup(original);
// 	printf("Оригинальная строка: %s\n", original);
// 	printf("Копированная строка: %s\n", copy);
// 	return (0);
// }
