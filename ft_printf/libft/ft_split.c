/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:10:37 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/05/01 19:09:25 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

/**
 * @brief Reserva (utilizando malloc(3)) un array de strings
 * resultante de separar la string ’s’ en substrings
 * utilizando el caracter ’c’ como delimitador. El
 * array debe terminar con un puntero NULL.
 * 
 * @param s  La string a separar
 * @param c El carácter delimitador
 * @return char** El array de nuevas strings resultante de la separación.
 * NULL si falla la reserva de memoria
 */
char	**ft_split(char const *s, char c)
{
	char	**lst;
	size_t	word_len;
	int		i;

	lst = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!s || !lst)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			lst[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	lst[i] = NULL;
	return (lst);
}

// int	main(void)
// {
// 	char const		*str;
// 	char			delimiter;
// 	char			**split_words;
// 	int				i;

// 	str = "This is a string with delimiters, multi spaces, and an empty word";
// 	delimiter = ',';
// 	split_words = ft_split("This is a string1, This is a string2", ',');
// 	if (split_words)
// 	{
// 		i = 0;
// 		while (split_words[i])
// 		{
// 			printf("Word %d: %s\n", i + 1, split_words[i]);
// 			i++;
// 		}
// 		free(split_words);
// 	}
// 	else
// 	{
// 		printf("Error splitting string\n");
// 	}
// 	return (0);
// }
