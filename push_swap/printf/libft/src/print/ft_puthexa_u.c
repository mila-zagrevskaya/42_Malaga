/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:42:03 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/10/25 14:02:49 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_puthexa_u(unsigned long long int n, char format)
{
	char			*base;
	int				nbr_len;
	unsigned int	base_len;

	nbr_len = 0;
	if (format == 'p')
	{
		write(1, "0x", 2);
		nbr_len += 2;
	}
	if (format == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	base_len = ft_strlen(base);
	if (n >= base_len)
	{
		ft_putunbr_base(n / 16, base);
		ft_putunbr_base(n % 16, base);
	}
	else
		write (1, &base[n], 1);
	nbr_len += ft_unbrlen_base(n, base_len);
	return (nbr_len);
}
