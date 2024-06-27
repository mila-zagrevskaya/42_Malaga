/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:17:10 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/05/01 17:12:02 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <fcntl.h>

/**
 * @brief Envía la string ’s’ al file descriptor dado, seguido de
 * un salto de línea
 * 
 * @param s La string a enviar
 * @param fd El file descriptor sobre el que escribir
 */
void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		write(fd, s++, 1);
	}
	write(fd, "\n", 1);
}

// int	main(void)
// {
// 	int		fd;

// 	fd = open("text.txt", O_WRONLY | O_CREAT, 0644);
// 	if (fd < 0)
// 	{
// 		perror("Error opening file");
// 		return (1);
// 	}
// 	ft_putendl_fd("1. This is a message to be written to the file", fd);
// 	ft_putendl_fd("2. This is a message to be written to the file", fd);
// 	close(fd);
// 	return (0);
// }
