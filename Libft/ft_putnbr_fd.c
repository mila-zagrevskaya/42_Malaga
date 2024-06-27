/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:46:05 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/05/01 17:18:27 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <fcntl.h>

/**
 * @brief Envía el número ’n’ al file descriptor dado
 * 
 * @param n El número que enviar
 * @param fd El file descriptor sobre el que escribir
 */
void	ft_putnbr_fd(int n, int fd)
{
	int	digit;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else
	{
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
		else
		{
			digit = n + 48;
			write(fd, &digit, 1);
		}
	}
}

// int	main(void)
// {
// 	int	fd = open("output.txt", O_WRONLY | O_CREAT, 0644);

// 	if (fd < 0)
// 	{
// 		perror("Error opening file");
// 		return (1);
// 	}
// 	ft_putnbr_fd(12345, fd);
// 	write(fd, "\n", 1);
// 	ft_putnbr_fd(-678, fd);
// 	write(fd, "\n", 1);
// 	ft_putnbr_fd(0, fd);
// 	write(fd, "\n", 1);
// 	ft_putnbr_fd(-2147483648, fd);
// 	write(fd, "\n", 1);
// 	close(fd);
// 	return (0);
// }
