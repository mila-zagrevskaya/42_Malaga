/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 13:08:41 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/12/20 15:50:54 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

/**
 * @brief converts a byte to an ASCII character
 * This is a signal handler that responds to the SIGUSR1 and SIGUSR2 signals.
 * It assembles the character bit by bit to output it.
 * If SIGUSR1, set the current bit to 1
 * Increase the bit counter
 * When 8 bits (1 symbol) are collected
 * Print the symbol
 * Reset the bit counter
 * Clearing the variable for the new symbol
 *  
 * @param signal
 * @var bit - Counter of the number of received bits
 * @var = i - Variable for the symbol being collected
 */
void	signal_handler(int signal)
{
	static int	bit;
	static int	i;

	if (signal == SIGUSR1)
		i |= (0x01 << bit);
	bit++;
	if (bit == 8)
	{
		ft_printf("%c", i);
		bit = 0;
		i = 0;
	}
}

/**
 * @brief The function starts a server that waits for signals from the client
 * and processes them using signal_handler
 * 
 * @param argc 
 * @param argv - The argv pointer is not used, this line prevents
 * compiler warnings
 * @return int 
 */
int	main(int argc, char **argv)
{
	int	pid;

	(void)argv;
	if (argc != 1)
	{
		ft_printf("Error\n");
		return (1);
	}
	pid = getpid();
	ft_printf("The server is running. PID = %d\n", pid);
	while (argc == 1)
	{
		signal(SIGUSR1, signal_handler);
		signal(SIGUSR2, signal_handler);
		pause ();
	}
	return (0);
}
