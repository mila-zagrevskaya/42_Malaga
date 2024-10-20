/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:19:02 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/05/03 14:21:06 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Crea un nuevo nodo utilizando malloc(3). La variable miembro
 * ’content’ se inicializa con el contenido del parámetro ’content’.
 * La variable ’next’, con NULL.
 * 
 * @param content el contenido con el que crear el nodo
 * @return t_list* - El nuevo nodo
 */

t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->content = content;
	elem->next = NULL;
	return (elem);
}

// int	main(void)
// {
// 	int		data;
// 	t_list	*new_node;

// 	data = 10;
// 	new_node = ft_lstnew(&data);
// 	if (new_node)
// 	{
// 		printf("Node content: %d\n", *(int *)new_node->content);
// 		printf("Next node: %p\n", new_node->next);
// 	}
// 	else
// 	{
// 		printf("Error creating new node\n");
// 	}
// 	free(new_node);
// 	return (0);
// }
