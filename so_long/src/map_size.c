/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:20:00 by lzahrevs          #+#    #+#             */
/*   Updated: 2025/03/04 14:21:43 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/**
 * Calculates the height of the map and verifies that all rows have
 * the same width.
 * If the map is invalid, the game is terminated with an error message.
 */
void	calculate_map_height(t_root *root, char *file)
{
	int				i;
	int				j;

	root->game->height = 1;
	i = root->game->width + 1;
	while (file[i] != 0)
	{
		j = 0;
		while (file[i + j] != 0 && file[i + j] != '\n')
			j++;
		if (root->game->width != j)
		{
			free(file);
			cleanup_and_exit(root, "Map is invalid!", 0);
		}
		i += root->game->width + 1;
		root->game->height++;
	}
}

/**
 * Calculates the width of the map by checking the first row of the map file.
 * If the width is invalid, the game is terminated with an error message.
 */
void	calculate_map_width(t_root *root, char *file)
{
	root->game->width = 0;
	while (file[root->game->width] && file[root->game->width] != '\n')
		root->game->width++;
	if (root->game->width == 0 || file[root->game->width] == 0)
	{
		free(file);
		cleanup_and_exit(root, "Map is invalid!", 0);
	}
}
