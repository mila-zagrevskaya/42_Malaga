/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:23:31 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/06/26 19:02:38 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdint.h>
# include "libft/libft.h"

/*The ft_printf() function emulates the operation of the
original printf() function.*/
int		ft_printf(char const *str, ...);
int		ft_putchar(int chr);
int		ft_putstr(char *str);
int		ft_putptr(intptr_t ptr);
int		ft_putnbr(int n);
int		ft_putdns(unsigned int n);
int		ft_puthex(unsigned int num, const char format);

#endif
