/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 13:08:41 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/12/20 15:21:58 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

/**
 * @brief Processes signals from the server to confirm successful message
 * transmission or error message.
 * 
 * @param signal - The type of signal that the client receives from the server.
 * There are two possible types:
 * 1: Tells the client that the message was sent successfully.
 * 2: SIGUSR Indicates an error in processing the message by the server.
 */
void	confirmation_handler(int signal)
{
	if (signal == 1)
		ft_printf("Message sent \n");
	else if (signal == SIGUSR2)
		ft_printf("ERROR \n");
}

/**
 * @brief Sends a character to the server as 8 bits using the SIGUSR1
 * and SIGUSR2 signals.
 * 
 * @param pid - The PID of the server to which signals are sent.
 * @param c - The symbol to be sent
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
 * @brief Receives the server PID and the message from the user, sends
 * the message to the server bit by bit, and calls the acknowledgement handler
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
		signal(SIGUSR2, confirmation_handler);
		confirmation_handler(1);
		send_signals(pid, '\n');
	}
	else
	{
		ft_printf("Error\n");
		return (1);
	}
	return (0);
}
