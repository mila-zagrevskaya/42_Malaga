/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:13:10 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/12/20 15:50:50 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_BONUS_H
# define MINITALK_BONUS_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <signal.h>
# include <string.h>
# include <limits.h>
# include <sys/types.h>
# include <sys/select.h>
# include "ft_printf/ft_printf.h"

// =======================================================
// To fix the visibility of the sigaction structure
// =======================================================
# ifndef _POSIX_C_SOURCE
#  define _POSIX_C_SOURCE 200809L
# endif

#endif

/* 
This is the header file for the minitalk project. It includes the 
necessary libraries and the prototypes of the functions.

unistd.h: for write()
*/