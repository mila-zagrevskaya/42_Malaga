/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 13:08:41 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/12/20 15:50:47 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

/**
 * @brief converts an ASCII character to a byte
 * Sends one character to the server as 8 bits using the SIGUSR1
 * and SIGUSR2 signals.
 * For each character bit (8 bits total)
 * Check the current character bit
 * If the bit is 1, send SIGUSR1
 * If the bit is 0, send SIGUSR2
 * Small delay between signals for stable transmission
 * Move to the next bit
 * 
 * @param pid - The PID of the server to which signals are sent.
 * @param c - The symbol to send.
 * 
 * kill(pid_t pid, int sig): Sends a signal to the process with the specified PID
 */
void	send_signals(int pid, char c)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if ((c & (0x01 << bit)))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(500);
		bit++;
	}
}

/**
 * @brief Receives the server PID and the message from the user,
 * then sends the message to the server bit by bit.
 * We check that two arguments are passed: PID and message
 * Convert PID from string to number
 * Send the current symbol to the server
 * Adding a line break character
 * Sending '\n' to the server
 * If the arguments are passed incorrectly:
 * Print an error message
 * End the program with an error
 * 
 * @param argc - The number of arguments passed to the program
 * @param argv - Array of string arguments
 * @ argv[1] — server PID
 * @ argv[2] — the message string to send.
 * @return int 
 */
int	main(int argc, char **argv)
{
	int	pid;
	int	i;

	i = 0;
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		while (argv[2][i] != '\0')
		{
			send_signals(pid, argv[2][i]);
			i++;
		}
		argv[2][i] = '\n';
		send_signals(pid, argv[2][i]);
	}
	else
	{
		ft_printf("Error\n");
		return (1);
	}
	return (0);
}
