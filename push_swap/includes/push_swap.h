/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:40:10 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/11/26 13:32:17 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../printf/include/ft_printf.h"
# include <limits.h>

typedef struct s_lst
{
	int				content;
	int				index;
	struct s_lst	*next;
	struct s_lst	*prev;
}				t_lst;

//INDEX_C
void	ps_index(t_lst **stack);

//SORT_C
int		is_sorted(t_lst **stack);
void	simple_sort(t_lst **a_stack, t_lst **b_stack);

//SORT_UTLIS_C
int		is_sorted(t_lst **stack);
int		is_order(t_lst **stack, int size);
void	reset_index(t_lst **stack);
void	rotate_to_min(t_lst **stack, int size);

//RADIX_C
int		list_size(t_lst *lst);
void	radix_sort(t_lst **a_stack, t_lst **b_stack);

//LIST_UTILS_C
void	list_addfront(t_lst **stack, t_lst *news);
void	list_addback(t_lst **stack, t_lst *news);
t_lst	*list_new(int content);
t_lst	*list_last(t_lst *stack);

//SWAP_C
void	do_sa(t_lst **stack);
void	do_sb(t_lst **stack);
void	do_ss(t_lst **a_stack, t_lst **b_stack);

//PUSH_C
void	do_push_a(t_lst **a_stack, t_lst **b_stack);
void	do_push_b(t_lst **a_stack, t_lst **b_stack);

//ROTATE_C
void	rotate(t_lst **stack);
void	do_ra(t_lst **stack);
void	do_rb(t_lst **stack);
void	do_rr(t_lst **a_stack, t_lst **b_stack);

//REVERSE_C
void	reverse(t_lst **stack);
void	do_rra(t_lst **stack);
void	do_rrb(t_lst **stack);
void	do_rrr(t_lst **a_stack, t_lst **b_stack);

#endif
