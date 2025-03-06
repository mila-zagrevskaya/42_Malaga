/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup_map_structure.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:20:45 by lzahrevs          #+#    #+#             */
/*   Updated: 2025/03/04 14:23:25 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/**
 * Sets up the map structure by calculating its dimensions, validating
 * its format, allocating memory for the map and objects,
 * and parsing the map data.
 */
void	setup_map_structure(t_root *root, char *file)
{
	calculate_map_width(root, file);
	calculate_map_height(root, file);
	validate_map_structure(root, file);
	root->game->coll
		= (t_coord *)malloc(sizeof(t_coord) * root->game->count_coll);
	if (root->game->coll == 0)
	{
		free(file);
		cleanup_and_exit(root, "parse_map(): malloc()", errno);
	}
	root->game->map = (int **)malloc(sizeof(int *) * root->game->height);
	if (root->game->map == 0)
	{
		free(file);
		cleanup_and_exit(root, "parse_map(): malloc()", errno);
	}
	parse_map(root, file);
}
