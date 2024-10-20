/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 12:21:11 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/05/01 17:11:41 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <fcntl.h>

/**
 * @brief Envía el carácter ’c’ al file descriptor especificado.
 * 
 * @param c  El carácter a enviar
 * @param fd El file descriptor sobre el que escribir
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int	main(void)
// {
// 	char	character;
// 	int		fd;

// 	character = 'A';
// 	fd = 1;
// 	ft_putchar_fd(character, fd);
// 	return (0);
// }

//---------------------------------------------

// int	main(void)
// {
// 	int	fd;

// 	fd = open("text.txt", O_WRONLY | O_CREAT, 0644);
// 	if (fd == -1)
// 	{
// 		perror("Error opening file");
// 		return (1);
// 	}
// 	ft_putchar_fd('H', fd);
// 	ft_putchar_fd('e', fd);
// 	ft_putchar_fd('l', fd);
// 	ft_putchar_fd('l', fd);
// 	ft_putchar_fd('o', fd);
// 	ft_putchar_fd('\n', fd);
// 	close(fd);
// 	return (0);
// }
