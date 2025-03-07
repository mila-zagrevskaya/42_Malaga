/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_game.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:18:45 by lzahrevs          #+#    #+#             */
/*   Updated: 2025/03/04 14:23:23 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/**
 * Draws a texture from the given image onto the game screen at (x, y).
 * Skips transparent pixels to preserve the background.
 */
static void	draw_texture(t_root *root, t_img *img, int x, int y)
{
	unsigned int	color;
	int				i;
	int				j;

	j = 0;
	while (j < 64)
	{
		i = 0;
		while (i < 64)
		{
			color = get_pixel_color(img, i, j);
			if (color != rgb_to_int(0, 255, 255, 255))
				set_pixel_color(root->mlx_img, x + i, y + j, color);
			i++;
		}
		j++;
	}
}

/**
 * Draws interactive game objects (exit, collectibles, player) at (i, j).
 */
static void	draw_objects(t_root *root, int i, int j)
{
	int				k;

	if (root->game->exit.x == i && root->game->exit.y == j)
		draw_texture(root, root->exit, i * 64, j * 64);
	k = -1;
	while (++k < root->game->count_coll)
		if (root->game->coll[k].x == i && root->game->coll[k].y == j)
			draw_texture(root, root->coll, i * 64, j * 64);
	if (root->game->player.x == i && root->game->player.y == j)
		draw_texture(root, root->player, i * 64, j * 64);
}

/**
 * Draws the game map, including walls and ground tiles.
 * Calls `draw_objects` to overlay interactive elements.
 */
static void	draw_map(t_root *root)
{
	int				i;
	int				j;

	j = 0;
	while (j < root->game->height)
	{
		i = 0;
		while (i < root->game->width)
		{
			if (root->game->map[j][i] == 1)
				draw_texture(root, root->wall, i * 64, j * 64);
			else
				draw_texture(root, root->ground, i * 64, j * 64);
			draw_objects(root, i, j);
			i++;
		}
		j++;
	}
}

/**
 * Renders the entire game scene and updates the window.
 */
void	render_game(t_root *root)
{
	draw_map(root);
	mlx_put_image_to_window(root->mlx, root->mlx_win, root->mlx_img, 0, 0);
}
