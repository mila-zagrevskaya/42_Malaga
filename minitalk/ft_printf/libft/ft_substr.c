/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:57:39 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/05/02 16:02:04 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Reserve (with malloc(3)) and return a substring of the string 's'.
The substring starts from index 'start' and has a maximum length 'len'.
 * 
 * @param s 
 * @param start 
 * @param len 
 * @return char* 
 */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char			*str;
// 	unsigned int	start;
// 	size_t			len;
// 	char			*substring;

// 	str = "Hello, world!";
// 	start = 7;
// 	len = 5;
// 	substring = ft_substr(str, start, len);
// 	printf("This is original string: '%s'\n", str);
// 	if (substring)
// 	{
// 		printf("Substring: '%s'\n", substring);
// 		free(substring);
// 	}
// 	else
// 	{
// 		printf("Error: Could not create substring\n");
// 	}
// 	return (0);
// }
