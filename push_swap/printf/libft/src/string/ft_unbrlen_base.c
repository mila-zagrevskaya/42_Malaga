/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unbrlen_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:42:03 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/10/25 14:00:23 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

size_t	ft_unbrlen_base(unsigned long long int n, size_t base)
{
	size_t	i;

	i = 1;
	while (n >= (unsigned long long int)base)
	{
		n /= base;
		i++;
	}
	return (i);
}
