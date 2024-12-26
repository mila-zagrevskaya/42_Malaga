/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:58:21 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/05/08 13:13:54 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Itera la lista ’lst’ y aplica la función ’f’ en el contenido
 * de cada nodo
 * 
 * @param lst un puntero al primer nodo
 * @param f un puntero a la función que utilizará cada nodo
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	void	*content;

	while (lst)
	{
		content = lst->content;
		(*f)(content);
		lst = lst->next;
	}
}

// void	print_int(void *data)
// {
// 	printf("%d\n", *(int *)data);
// }

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	int		data1;
// 	int		data2;
// 	int		data3;

// 	head = NULL;
// 	data1 = 10;
// 	data2 = 20;
// 	data3 = 30;
// 	node1 = ft_lstnew(&data1);
// 	node2 = ft_lstnew(&data2);
// 	node3 = ft_lstnew(&data3);
// 	head = node3;
// 	head->next = node2;
// 	head->next->next = node1;
// 	ft_lstiter(head, print_int);
// 	printf("\n");
// 	return (0);
// }
