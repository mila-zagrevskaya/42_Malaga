/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:46:16 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/03/18 15:47:57 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	ri;
	int	temp;

	i = 0;
	ri = size - 1;
	while (i < ri)
	{
		temp = tab[i];
		tab[i] = tab[ri];
		tab[ri] = temp;
		i++;
		ri--;
	}
}

/*
int	main(void)
{
	int	array[] = {3, 6, 9, 12, 16, 18, 21};
	int	size;

	size = sizeof(array) / sizeof(array[0]);
	ft_rev_int_tab(array, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
	return (0);
}
*/
