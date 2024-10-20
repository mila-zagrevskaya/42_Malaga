/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:39:30 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/05/06 16:48:18 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Devuelve el último nodo de la lista
 * 
 * @param lst el principio de la lista
 * @return t_list*  - Último nodo de la lista
 */
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*last_node;

// 	head = NULL;
// 	node1 = ft_lstnew("Item 1");
// 	node2 = ft_lstnew("Item 2");
// 	node3 = ft_lstnew("Item 3");
// 	head = node3;
// 	head->next = node2;
// 	head->next->next = node1;
// 	last_node = ft_lstlast(head);
// 	if (last_node)
// 		printf("Content of the last node: %s\n", (char *)last_node->content);
// 	else
// 		printf("The list is empty.\n");
// 	return (0);
// }
