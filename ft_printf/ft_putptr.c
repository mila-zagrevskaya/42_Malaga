/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:14:46 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/05/17 13:50:05 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_ptr_len(uintptr_t num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_search_ptr(uintptr_t num)
{
	if (num >= 16)
	{
		ft_search_ptr(num / 16);
		ft_search_ptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

/*%p The void * pointer given as an argument is printed
in hexadecimal format.*/

int	ft_putptr(intptr_t ptr)
{
	size_t	count;

	if (ptr == 0)
		return (write(1, "(nil)", 5));
	count = 0;
	count += write(1, "0x", 2);
	ft_search_ptr(ptr);
	count += ft_ptr_len(ptr);
	return (count);
}
