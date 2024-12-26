/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:42:08 by mila_zagrev       #+#    #+#             */
/*   Updated: 2024/10/23 13:51:20 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

/*ft_update_stack finds "/n" on STACK using ft_strch and assigning to new_stack
Allocates space for new string AUX and copies the content of new_stack on it.
frees old stack and returns updated stack (aux)*/

/*ft_update_stack busca "/n" en STACK usando ft_strch y asignando a new_stack
Asigna espacio para la nueva linea AUX y copia el contenido de new_stack en ella.
Libera el stack anterior y devuelve el stack actualizado (aux)*/

char	*ft_update_stack(char *stack)
{
	char	*new_stack;
	char	*aux;
	size_t	i;

	i = 0;
	new_stack = ft_strchr(stack, '\n');
	if (!new_stack)
		return (free(stack), stack = NULL, NULL);
	new_stack++;
	aux = malloc((ft_strlen(new_stack) + 1) * sizeof(char));
	if (!aux)
		return (free(stack), stack = NULL, NULL);
	while (new_stack[i])
	{
		aux[i] = new_stack[i];
		i++;
	}
	aux[i] = '\0';
	free(stack);
	return (aux);
}

/*ft_create_line takes stack, finds "/n" or end of file, allocates space
for new line, copies characters from stack to new line, adds "\n" if necessary,
frees stack, and returns new line*/

/*ft_create_line toma la stack, busca "/n" o el final del archivo,
asigna espacio para una nueva línea, copia caracteres del stack a una nueva
línea, agrega "\n" si es necesario, libera el stack y devuelve una nueva línea*/

char	*ft_create_line(char *stack)
{
	size_t	pos;
	char	*line;

	if (!stack || !*stack)
		return (NULL);
	pos = 0;
	while (stack[pos] && stack[pos] != '\n')
		pos++;
	if (stack[pos] == '\n')
		pos++;
	line = malloc((pos + 1) * sizeof (char));
	if (!line)
		return (NULL);
	pos = 0;
	while (stack[pos] && stack[pos] != '\n')
	{
		line[pos] = stack[pos];
		pos++;
	}
	if (stack[pos] == '\n')
		line[pos++] = '\n';
	line[pos] = '\0';
	return (line);
}

/*ft_join appends bytes stored in TMP to STACK using ft_strjoin.
If STACK is not yet created, it initializes it*/

/*ft_join agrega bytes almacenados en TMP a STACK usando ft_strjoin.
Si STACK aún no se creó, lo inicializa*/

char	*ft_join(char *str1, char *str2)
{
	char	*aux;

	if (!str1)
	{
		str1 = malloc(1);
		str1[0] = '\0';
	}
	if (!str1)
		return (NULL);
	aux = ft_strjoin(str1, str2);
	free(str1);
	return (aux);
}

/*get_next_line function declares STACK as a static array to hold
the text that has been read within function calls.
The function reads from the file descriptor in chunks of BUFFER_SIZE bytes
and buils STACK calling FT_JOIN until "\n" or end of file is reached.
Returned LINE is created by FT_CREATE_LINE
STACK is updated by FT_UPDATE_STACK and ready for next call*/

/*La función get_next_line declara STACK como un array estático para almacenar
el texto que se ha leído en las llamadas de función.
La función lee desde el descriptor de archivo en fragmentos de bytes BUFFER_SIZE
y construye STACK llamando a FT_JOIN hasta que se alcanza "\n"
o el final del archivo.
FT_CREATE_LINE crea la línea LINE devuelta
FT_UPDATE_STACK actualiza STACK y está lista para la siguiente llamada*/

char	*get_next_line(int fd)
{
	static char	*stack = NULL;
	char		*line;
	char		*tmp;
	int			read_bytes;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	read_bytes = 1;
	tmp = malloc((BUFFER_SIZE + 1) * sizeof(char));
	while (read_bytes > 0 && !(ft_strchr(stack, '\n')))
	{
		read_bytes = read(fd, tmp, BUFFER_SIZE);
		if (read_bytes < 0)
			return (free(stack), stack = NULL, free(tmp), NULL);
		tmp[read_bytes] = '\0';
		stack = ft_join(stack, tmp);
		if (!stack)
			return (free(tmp), NULL);
	}
	line = ft_create_line(stack);
	stack = ft_update_stack(stack);
	return (free(tmp), line);
}

/*
int	main(int argc, char **argv)
{
	int		fd;
	char	*str;
	int		i;

	if (argc > 2)
		return (0);
	i = 0;
	fd = open(argv[1], O_RDONLY);
	printf("fd gen = %i\n", fd);
	printf("BUFFER_SIZE = %i\n", BUFFER_SIZE);
	while (str)
	{
		str = get_next_line(fd);
		if (!str)
			return (1);
		printf("%s\n", str);
		free(str);
		i++;
	}
}
*/
