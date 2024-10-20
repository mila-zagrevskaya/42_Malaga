/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mila_zagrevskya <mila_zagrevskya@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:48:52 by mila_zagrev       #+#    #+#             */
/*   Updated: 2024/10/20 21:00:18 by mila_zagrev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char *ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c % 256)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == c % 256)
		return ((char *)&s[i]);
	return (NULL);
}

char *ft_strjoin(const char *s1, const char *s2)
{
	size_t 	j;
	size_t 	i;
	char 		*buff;

	if (!s1 && !s2)
		return (NULL);
	j = 0;
	buff = (char *)malloc((ft_strlen(s2) + ft_strlen(s1) + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		buff[i] = s1[i];
		i++;
	}
	while (s2[j])
		buff[i++] = s2[j++];
	buff[i] = '\0';
	return (buff);
}

size_t ft_strlen(const char *s)
{
	size_t j;

	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}
