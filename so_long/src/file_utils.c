/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:20:09 by lzahrevs          #+#    #+#             */
/*   Updated: 2025/03/04 14:20:39 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/**
 * Appends data from the buffer to the file string.
 * If the operation fails, the game is terminated with an error message.
 */
static void	append_to_file_data(t_root *root, char **file, char buf[], int fd)
{
	char			*tmp;

	tmp = ft_strjoin(*file, buf);
	free(*file);
	*file = tmp;
	if (*file == 0)
	{
		close(fd);
		cleanup_and_exit(root, "initialize_map(): ft_strjoin()", errno);
	}
}

/**
 * Reads the map file in chunks and calls `append_to_file_data` to add data
 * to the file string.
 * If reading fails, the game is terminated with an error message.
 */
static void	read_map_file(t_root *root, char **file, char buf[], int fd)
{
	int				ret;

	ret = 1;
	while (ret != 0)
	{
		ret = read(fd, buf, 1024);
		if (ret == -1)
		{
			free(*file);
			close(fd);
			cleanup_and_exit(root, "initialize_map(): read()", errno);
		}
		else
		{
			buf[ret] = 0;
			append_to_file_data(root, file, buf, fd);
		}
	}
}

/**
 * Initializes an empty string to hold the file data.
 * If memory allocation fails, the game is terminated with an error message.
 */
static char	*initialize_file_buffer(t_root *root, int fd)
{
	char			*file;

	file = ft_calloc(1, 1);
	if (file == 0)
	{
		close(fd);
		cleanup_and_exit(root, "initialize_map(): ft_calloc()", errno);
	}
	return (file);
}

/**
 * Initializes the map by opening the map file, reading its contents,
 * and passing the data to `setup_map_structure` for further processing.
 */
void	initialize_map(t_root *root, char *filename)
{
	int				fd;
	char			*file;
	char			buf[1024 + 1];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		cleanup_and_exit(root, filename, errno);
	file = initialize_file_buffer(root, fd);
	read_map_file(root, &file, buf, fd);
	close(fd);
	setup_map_structure(root, file);
	free(file);
}
