/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:32:32 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/05/07 14:16:38 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Toma como parámetro un nodo ’lst’ y libera la memoria del contenido
 * utilizando la función ’del’ dada como parámetro, además de liberar el nodo.
 * La memoria de ’next’ no debe liberarse
 * 
 * @param lst el nodo a liberar
 * @param del un puntero a la función utilizada para liberar el
 * contenido del nodo
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	if (del)
		del(lst->content);
	free(lst);
}

// int	main(void)
// {
// 	t_list	*head;
// 	char	*char1;
// 	char	*char2;
// 	char	*char3;
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*current;

// 	head = NULL;
// 	char1 = malloc(sizeof(char));
// 	char2 = malloc(sizeof(char));
// 	char3 = malloc(sizeof(char));
// 	*char1 = 'A';
// 	*char2 = 'B';
// 	*char3 = 'C';
// 	node1 = ft_lstnew(char1);
// 	node2 = ft_lstnew(char2);
// 	node3 = ft_lstnew(char3);
// 	head = node3;
// 	head->next = node2;
// 	head->next->next = node1;
// 	current = head;
// 	while (current)
// 	{
// 		printf("%c\n", *(char *)current->content);
// 		current = current->next;
// 	}
// 	ft_lstdelone(head->next, free);
// 	printf("After deletion: \n");
// 	current = head;
// 	while (current)
// 	{
// 		printf("%c\n", *(char *)current->content);
// 		current = current->next;
// 	}
// 	return (0);
// }
