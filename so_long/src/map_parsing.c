/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_parsing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:20:37 by lzahrevs          #+#    #+#             */
/*   Updated: 2025/03/04 14:21:22 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/**
 * Frees the memory allocated for the game map and other related structures,
 * and then terminates the game with an error message if memory allocation fails.
 */
static void	free_map_memory(t_root *root, char *file, int **m, int size)
{
	int				i;

	i = 0;
	while (i < size)
		free(m[i++]);
	free(m);
	root->game->map = 0;
	free(file);
	cleanup_and_exit(root, "parse_map(): malloc()", errno);
}

/**
 * Extracts the coordinates of objects (player, exit, or collectors)
 * from the map string
 * and updates the corresponding structures with their positions.
 */
static void	parse_map_object_coordinates(t_root *root, char *file,
	int k, int *obj)
{
	if (file[k] == 'P')
	{
		root->game->player.x = k % (root->game->width + 1);
		root->game->player.y = k / (root->game->width + 1);
		file[k] = '0';
	}
	if (file[k] == 'E')
	{
		root->game->exit.x = k % (root->game->width + 1);
		root->game->exit.y = k / (root->game->width + 1);
		file[k] = '0';
	}
	else if (file[k] == 'C')
	{
		root->game->coll[*obj].x = k % (root->game->width + 1);
		root->game->coll[*obj].y = k / (root->game->width + 1);
		file[k] = '0';
		(*obj)++;
	}
}

/**
 * Parses the map from a string into a 2D array representing the game map.
 * It also extracts coordinates of the player, exit, and collectors from the map.
 */
void	parse_map(t_root *root, char *file)
{
	int				i;
	int				j;
	int				k;
	int				obj;

	obj = 0;
	k = 0;
	j = -1;
	while (++j < root->game->height)
	{
		root->game->map[j] = (int *)malloc(sizeof(int) * root->game->width);
		if (root->game->map[j] == 0)
			free_map_memory(root, file, root->game->map, j);
		i = 0;
		while (i < root->game->width)
		{
			parse_map_object_coordinates(root, file, k, &obj);
			root->game->map[j][i++] = file[k++] - 48;
		}
		k++;
	}
}
