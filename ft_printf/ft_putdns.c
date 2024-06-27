/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdns.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:42:03 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/05/16 16:03:02 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief %u Prints an unsigned decimal (base 10) number
 * 
 * @param n 
 * @return int 
 */

int	ft_putdns(unsigned int n)
{
	int	num;

	num = 0;
	if (n >= 10)
		num += ft_putdns(n / 10);
	write(1, &"0123456789"[n % 10], 1);
	num++;
	return (num);
}
