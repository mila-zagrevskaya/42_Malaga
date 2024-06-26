/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:25:11 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/05/06 16:35:19 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Cuenta el número de nodos de una lista
 * 
 * @param lst el principio de la lista
 * @return int La longitud de la lista
 */
int	ft_lstsize(t_list *lst)
{
	int	ind;

	ind = 0;
	while (lst)
	{
		ind++;
		lst = lst->next;
	}
	return (ind);
}

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	int		list_size;

// 	head = NULL;
// 	node1 = ft_lstnew("Item 1");
// 	node2 = ft_lstnew("Item 2");
// 	node3 = ft_lstnew("Item 3");
// 	head = node3;
// 	head->next = node2;
// 	head->next->next = node1;

// 	list_size = ft_lstsize(head);
// 	printf("Number of nodes in the list: %d\n", list_size);
// 	return (0);
// }
