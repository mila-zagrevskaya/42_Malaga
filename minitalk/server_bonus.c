/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 13:08:41 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/12/20 15:50:53 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

/**
 * @brief A signal handler that receives SIGUSR1 and SIGUSR2. It assembles
 * a character from the transmitted bits and outputs it once 8 bits (1 byte)
 * have been assembled.
 * If SIGUSR1, set the current bit to 1
 * Increase the bit counter
 * When 8 bits (1 symbol) are collected
 * Print the symbol
 * Reset the bit counter
 * Clearing the variable for the new symbol
 * 
 * After processing a character (bit == 8):
 * The bit counter is reset.
 * The i variable is cleared.
 * 
 * @param sig - Indicates which signal was received (SIGUSR1 or SIGUSR2)
 * @param info - Contains additional information about the signal,
 * including the PID of the process that sent the signal (info->si_pid).
 * This is needed to send acknowledgements to the client.
 * If the collected character is NULL (i == 0), SIGUSR2 is sent
 * to the clientto confirm that the string transmission is complete:
 * 
 * @param context - Indicates the execution context. In this case
 * it is not used and is ignored.
 * static int bit - Counter of the number of received bits
 * static int i - Collectible symbol
 */
void	handle_signal(int sig, siginfo_t *info, void *context)
{
	static int	bit;
	static int	i;

	(void)context;
	if (sig == SIGUSR1)
		i |= (0x01 << bit);
	bit++;
	if (bit == 8)
	{
		if (i == 0)
			kill(info->si_pid, SIGUSR2);
		ft_printf("%c", i);
		bit = 0;
		i = 0;
	}
}

/**
 * @brief Initializes a server that:
 * Prints its PID.
 * Configures signal handling using sigaction.
 * Waits for and handles signals from the client.
 * 
 * After receiving '\0', the server sends the SIGUSR2
 * signal to the client as confirmation that the transmission has been completed.
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int	main(int argc, char **argv)
{
	int					pid;
	struct sigaction	act;

	(void)argv;
	if (argc != 1)
	{
		ft_printf("Error\n");
		return (1);
	}
	pid = getpid();
	ft_printf("\n PID number: %d \n", pid);
	act.sa_sigaction = handle_signal;
	sigemptyset(&act.sa_mask);
	act.sa_flags = 0;
	while (argc == 1)
	{
		sigaction(SIGUSR1, &act, NULL);
		sigaction(SIGUSR2, &act, NULL);
		pause();
	}
	return (0);
}
