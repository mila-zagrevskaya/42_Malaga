/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:13:10 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/12/20 15:50:52 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <sys/types.h>
# include <unistd.h>
# include <signal.h>
# include <stdlib.h>
# include <stdio.h>
# include "ft_printf/ft_printf.h"

// server.c
void	signal_handler(int signal);

// client.c
void	send_signals(int pid, char c);

#endif
