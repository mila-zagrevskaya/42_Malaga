/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:02:04 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/06/26 19:09:07 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief *%c Prints a single character
 * 
 * @param chr 
 * @return int 
 */
int	ft_putchar(int chr)
{
	return (write(1, &chr, 1));
}
