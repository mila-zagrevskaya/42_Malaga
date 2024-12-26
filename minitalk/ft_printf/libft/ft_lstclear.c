/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:59:53 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/05/07 14:40:40 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Elimina y libera el nodo ’lst’ dado y todos los consecutivos
 * de ese nodo, utilizando la función ’del’ y free(3).
 * Al final, el puntero a la lista debe ser NULL
 * 
 * @param lst la dirección de un puntero a un nodo
 * @param del  un puntero a función utilizado para eliminar el contenido
 * de un nodo
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	free(*lst);
	*lst = NULL;
}

// int	main(void)
// {
// 	t_list	*head;
// 	int		*data1;
// 	t_list	*node1;
// 	int		*data2;
// 	t_list	*node2;
// 	int		*data3;
// 	t_list	*node3;
// 	t_list	*current;

// 	head = NULL;
// 	data1 = malloc(sizeof(int));
// 	data2 = malloc(sizeof(int));
// 	data3 = malloc(sizeof(int));
// 	*data1 = 10;
// 	*data2 = 20;
// 	*data3 = 30;

// 	node1 = ft_lstnew(data1);
// 	node2 = ft_lstnew(data2);
// 	node3 = ft_lstnew(data3);
// 	head = node3;
// 	head->next = node2;
// 	head->next->next = node1;
// 	current = head;
// 	while (current)
// 	{
// 		printf("Value: %d\n", *(int *)current->content);
// 		current = current->next;
// 	}
// 	ft_lstclear(&head, free);
// 	if (head == NULL)
// 		printf("\nList successfully cleared!\n");
// 	else
// 		printf("\nError: List not cleared properly.\n");
// 	return (0);
// }
