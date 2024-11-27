/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:42:03 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/10/25 14:03:13 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static double	after_point(const char *nptr, double res, int index)
{
	int	e;

	e = 0;
	while (ft_isdigit(nptr[index]))
	{
		res = (res * 10.) + (nptr[index] - '0');
		index++;
		e--;
	}
	while (e < 0)
	{
		res /= 10.;
		e++;
	}
	return (res);
}

double	ft_atof(const char *nptr)
{
	int		i;
	int		sign;
	double	res;

	i = 0;
	sign = 1;
	res = 0.0;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '-')
		sign *= -1;
	i += (nptr[i] == '+' || nptr[i] == '-');
	while (ft_isdigit(nptr[i]))
	{
		res = (res * 10.) + (nptr[i] - '0');
		i++;
	}
	if (nptr[i] != '.')
		return (res * sign);
	res = after_point(nptr, res, ++i);
	return (res * sign);
}
