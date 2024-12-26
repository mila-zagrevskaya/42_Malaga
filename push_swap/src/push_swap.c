/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:40:10 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/11/26 14:01:35 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	ps_check_duplicate(t_lst *stack)
{
	int		tmp;
	t_lst	*dup;

	while (stack && stack->next)
	{
		tmp = stack->content;
		dup = stack;
		while (dup->next)
		{
			dup = dup->next;
			if (dup->content == tmp)
				return (-1);
		}
		stack = stack->next;
	}
	return (1);
}

static void	ps_clearstack(t_lst **stack)
{
	if (!stack || !(*stack))
		return ;
	ps_clearstack(&(*stack)->next);
	free(*stack);
	*stack = NULL;
}

static int	ps_initstack(int ac, char **av, t_lst **a_stack)
{
	int			i;
	int			j;
	char		**split;

	i = 1;
	while (i < ac)
	{
		j = 0;
		split = ft_split(av[i], ' ');
		if (!split[j])
			return (0);
		while (split[j])
		{
			if (ft_atol(split[j]) > INT_MAX
				|| ft_atol(split[j]) < INT_MIN)
				return (0);
			list_addback(a_stack, list_new(ft_atoi(split[j])));
			j++;
		}
		free_split(split);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_lst			*a_stack;
	t_lst			*b_stack;

	if (ac == 1)
		exit(1);
	a_stack = NULL;
	b_stack = NULL;
	if (ps_initstack(ac, av, &a_stack) == 0)
		return (ft_putstr_fd("Error\n", 2));
	else if (ps_check_duplicate(a_stack) == -1)
		return (ft_putstr_fd("Error\n", 2));
	else
	{
		ps_index(&a_stack);
		if (is_sorted(&a_stack) != 1)
		{
			if (list_size(a_stack) <= 5)
				simple_sort(&a_stack, &b_stack);
			else
				radix_sort(&a_stack, &b_stack);
		}
	}
	ps_clearstack(&a_stack);
	ps_clearstack(&b_stack);
	return (0);
}
