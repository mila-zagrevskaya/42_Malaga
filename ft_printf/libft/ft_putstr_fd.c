/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 12:52:38 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/05/01 17:28:33 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <fcntl.h>

/**
 * @brief Envía la string ’s’ al file descriptor especificado
 * 
 * @param s La string a enviar
 * @param fd El file descriptor sobre el que escribir
 */
void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		write(fd, s++, 1);
	}
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
// 	ft_putstr_fd("1. This is a message to be written to the file", fd);
// 	write(fd, "\n", 1);
// 	ft_putstr_fd("2. This is a message to be written to the file", fd);
// 	write(fd, "\n", 1);
// 	close(fd);
// 	return (0);
// }
