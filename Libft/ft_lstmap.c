/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 13:20:38 by lzahrevs          #+#    #+#             */
/*   Updated: 2024/05/08 14:56:00 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* @brief Itera la lista ’lst’ y aplica la función ’f’ al contenido de cada nodo
* Crea una lista resultante de la aplicación correcta y sucesiva de la función
* ’f’ sobre cada nodo. La función ’del’ se utiliza para eliminar el contenido
* de un nodo, si hace falta.
 * 
 * @param lst un puntero a un nodo
 * @param f la dirección de un puntero a una función usada en la iteración de
 * cada elemento de la lista
 * @param del  un puntero a función utilizado para eliminar el contenido de un
 * nodo, si es necesario
 * @return t_list* La nueva lista. NULL si falla la reserva de memoria
 */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_element;
	void	*content;

	new_list = NULL;
	while (lst)
	{
		content = (*f)(lst->content);
		if (content == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_element = ft_lstnew(content);
		if (new_element == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_element);
		lst = lst->next;
	}
	return (new_list);
}

// char	*to_uppercase(void *data)
// {
// 	char	*char_data;

// 	char_data = (char *)data;
// 	*char_data = toupper(*char_data);
// 	return (char_data);
// }

// void	ft_list_print(t_list *lst)
// {
// 	while (lst)
// 	{
// 		printf("%c ", *(char *)lst->content);
// 		lst = lst->next;
// 	}
// 	printf("\n");
// }

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*new_list;
// 	char	data1;
// 	char	data2;
// 	char	data3;

// 	head = NULL;
// 	data1 = 'a';
// 	data2 = 'b';
// 	data3 = 'c';
// 	node1 = ft_lstnew(&data1);
// 	node2 = ft_lstnew(&data2);
// 	node3 = ft_lstnew(&data3);
// 	head = node1;
// 	head->next = node2;
// 	head->next->next = node3;
// 	printf("Original list: ");
// 	ft_list_print(head);
// 	new_list = ft_lstmap(head, (void *(*)(void *))to_uppercase, NULL);
// 	printf("Uppercase list: ");
// 	ft_list_print(new_list);
// 	ft_lstclear(&new_list, free);
// 	return (0);
// }
