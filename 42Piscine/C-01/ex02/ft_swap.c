/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:21:33 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/03/14 13:07:45 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*
int	main(void)
{
	int	first_num;
	int	second_num;
	int	*first_pointer;
	int	*second_pointer;

	first_num = 5;
	second_num = 7;
	first_pointer = &first_num;ß
	second_pointer = &second_num;
	ft_swap(first_pointer, second_pointer);
	printf("first_num : %d, second_num : %d\n", first_num, second_num);
	return (0);
}
*/
