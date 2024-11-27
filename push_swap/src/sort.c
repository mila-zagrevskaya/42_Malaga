/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:06:09 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/11/21 13:38:44 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	sort_three(t_lst **stack)
{
	while (is_sorted(stack) != 1)
	{
		if (((*stack)->index > (*stack)->next->index)
			&& ((*stack)->index < (*stack)->next->next->index))
			do_sa(stack);
		else if (((*stack)->index > ((*stack)->next->index))
			&& ((*stack)->index > (*stack)->next->next->index))
			do_ra(stack);
		else
			do_rra(stack);
	}
}

static void	sort_four(t_lst **a_stack, t_lst **b_stack)
{
	if (is_order(a_stack, 4) == 1)
		return ;
	rotate_to_min(a_stack, 4);
	do_push_b(a_stack, b_stack);
	reset_index(a_stack);
	sort_three(a_stack);
	do_push_a(a_stack, b_stack);
}

void	simple_sort(t_lst **a_stack, t_lst **b_stack)
{
	int	size;

	size = list_size(*a_stack);
	if (size == 3)
		sort_three(a_stack);
	else if (size == 4)
		sort_four(a_stack, b_stack);
	else
	{
		if (is_order(a_stack, 5) == 1)
			return ;
		rotate_to_min(a_stack, 5);
		do_push_b(a_stack, b_stack);
		reset_index(a_stack);
		sort_four(a_stack, b_stack);
		do_push_a(a_stack, b_stack);
	}
}
