/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:11:13 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/05/06 18:20:47 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Añade el nodo ’new’ al final de la lista ’lst’
 * 
 * @param lst el puntero al primer nodo de una lista
 * @param new el puntero a un nodo que añadir a la lista
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*new_node;
// 	t_list	*current;

// 	head = NULL;
// 	node1 = ft_lstnew("Item 1");
// 	node2 = ft_lstnew("Item 2");
// 	head = node2;
// 	head->next = node1;
// 	new_node = ft_lstnew("Item 3");
// 	ft_lstadd_back(&head, new_node);
// 	current = head;
// 	while (current)
// 	{
// 		printf("%s ", (char *)current->content);
// 		current = current->next;
// 	}
// 	printf("\n");
// 	return (0);
// }
