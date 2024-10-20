/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:49:36 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/05/02 15:48:43 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The ft_strtrim() function takes a string and trims it
 * @brief Trimming means removing the characters specified in the set string
 * from the start AND the end of the string s1, without removing the
 * characters from the set that are in the middle of s1
 * 
 * @param s1 
 * @param set 
 * @return char* 
 */

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*result;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) -1;
	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
	if (start > end)
		return (ft_strdup(s1 + end + 1));
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;
	result = malloc(end - start + 2);
	if (!result)
		return (NULL);
	ft_strlcpy(result, &s1[start], end - start + 2);
	return (result);
}

// int	main(void)
// {
// 	char	*str;
// 	char	*to_remove;
// 	char	*trimmed;

// 	str = " This is a string with leading and trailing spaces. ";
// 	to_remove = " \t\n";
// 	trimmed = ft_strtrim(str, to_remove);
// 	printf("This is original string: '%s'\n", str);
// 	if (trimmed)
// 	{
// 		printf("Trimmed string: '%s'\n", trimmed);
// 		free(trimmed);
// 	}
// 	else
// 	{
// 		printf("Error trimming the string\n");
// 	}
// 	return (0);
// }
