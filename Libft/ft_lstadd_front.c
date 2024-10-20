/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 14:23:10 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/05/06 16:26:47 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Añade el nodo ’new’ al principio de la lista ’lst’
 * 
 * @param lst la dirección de un puntero al primer nodo de una lista
 * @param new un puntero al nodo que añadir al principio de la lista
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new)
	{
		new->next = *lst;
		*lst = new;
	}
}

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*element1;
// 	t_list	*element2;
// 	t_list	*element3;

// 	head = NULL;
// 	element1 = ft_lstnew("Item 1");
// 	element2 = ft_lstnew("Item 2");
// 	element3 = ft_lstnew("Item 3");
// 	ft_lstadd_front(&head, element3);
// 	ft_lstadd_front(&head, element2);
// 	ft_lstadd_front(&head, element1);
// 	printf("%s %s %s", element1->content, element2->content, element3->content);
// 	return (0);
// }
