/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:17:36 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/11/21 13:38:33 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	push(t_lst **a_stack, t_lst **b_stack)
{
	t_lst	*tmp;

	if (!b_stack)
		return ;
	tmp = (*b_stack)->next;
	list_addfront(a_stack, *b_stack);
	*b_stack = tmp;
	if (*b_stack)
		(*b_stack)->prev = NULL;
}

void	do_push_a(t_lst **a_stack, t_lst **b_stack)
{
	push(a_stack, b_stack);
	ft_printf("pa\n");
}

void	do_push_b(t_lst **a_stack, t_lst **b_stack)
{
	push(b_stack, a_stack);
	ft_printf("pb\n");
}
