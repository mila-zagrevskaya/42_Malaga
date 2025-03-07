/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_validation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:20:20 by lzahrevs          #+#    #+#             */
/*   Updated: 2025/03/04 14:22:36 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/**
 * Checks if the current index is a border (wall) of the map.
 * The map's borders must be walls for the map to be valid.
 */
static int	check_map_border(t_root *root, int i)
{
	if (i < root->game->width
		|| i > (root->game->width + 1) * (root->game->height - 1)
		|| i % (root->game->width + 1) == 0
		|| i % (root->game->width + 1) == root->game->width - 1)
		return (1);
	return (0);
}

/**
 * Checks if the map element at the given index is valid (player, exit,
 * collector, or wall).
 * If the element is invalid, the game is terminated with an error message.
 */
static void	check_map_element_validity(t_root *root, char *file, int i)
{
	if (file[i] == 'P')
		root->game->count_player++;
	else if (file[i] == 'E')
		root->game->count_exit++;
	else if (file[i] == 'C')
		root->game->count_coll++;
	else if (file[i] == '1' || file[i] == '0')
		return ;
	else
	{
		free(file);
		cleanup_and_exit(root, "Map is invalid!", 0);
	}
}

/**
 * Validates the map by checking that it is surrounded by walls and contains
 * exactly one player, one exit, and at least one collector.
 * If any validation fails, the game is terminated with an error message.
 */
void	validate_map_structure(t_root *root, char *file)
{
	int				i;

	i = -1;
	while (file[++i] != 0)
	{
		if (file[i] == '\n')
			continue ;
		if (check_map_border(root, i))
		{
			if (file[i] != '1')
			{
				free(file);
				cleanup_and_exit(root, "Map must be surrounded by walls.", 0);
			}
		}
		else
			check_map_element_validity(root, file, i);
	}
	if (root->game->count_player != 1
		|| root->game->count_exit != 1
		|| root->game->count_coll < 1)
	{
		free(file);
		cleanup_and_exit(root, "Map is invalid!", 0);
	}
}
