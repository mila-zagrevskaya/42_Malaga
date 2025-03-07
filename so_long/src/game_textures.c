/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_textures.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:18:21 by lzahrevs          #+#    #+#             */
/*   Updated: 2025/03/04 14:26:41 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/**
 * Loads a texture from a file and assigns it to the given image object.
 * Exits with an error if loading the texture fails.
 */
static void	load_texture(t_root *root, t_img **img, char *path)
{
	int				width;
	int				height;

	*img = mlx_xpm_file_to_image(root->mlx, path, &width, &height);
	if (*img == 0)
		cleanup_and_exit(0, "initialize_textures(): can't load texture!", 0);
	(*img)->width = width;
	(*img)->height = height;
}

/**
 * Initializes all game textures by loading them from files.
 */
static void	initialize_textures(t_root *root)
{
	load_texture(root, &root->player, "./textures/player.xpm");
	load_texture(root, &root->exit, "./textures/house.xpm");
	load_texture(root, &root->coll, "./textures/pokeball.xpm");
	load_texture(root, &root->wall, "./textures/wall.xpm");
	load_texture(root, &root->ground, "./textures/sand.xpm");
}

/**
 * Initializes the rendering system, creating the MLX window and image.
 * Exits with an error if any initialization step fails.
 */
static void	initialize_renderer(t_root *root)
{
	root->mlx = mlx_init();
	if (root->mlx == 0)
		cleanup_and_exit(root, "mlx_init(): can't load mlx!", 0);
	root->mlx_win = mlx_new_window(root->mlx, root->game->width * 64,
			root->game->height * 64, "so_long");
	if (root->mlx_win == 0)
		cleanup_and_exit(root, "mlx_new_window(): can't create a window!", 0);
	root->mlx_img = mlx_new_image(root->mlx, root->game->width * 64,
			root->game->height * 64);
	if (root->mlx_img == 0)
		cleanup_and_exit(root, "mlx_new_image(): can't create an image!", 0);
}

/**
 * Initializes the root object, sets up the game, renderer, and textures.
 * Exits with an error if any initialization step fails.
 */
t_root	*initialize_root(char *filename)
{
	t_root			*root;

	root = (t_root *)malloc(sizeof(t_root));
	if (root == 0)
		cleanup_and_exit(0, "initialize_root(): malloc()", errno);
	root->game = 0;
	root->mlx = 0;
	root->mlx_win = 0;
	root->mlx_img = 0;
	root->player = 0;
	root->exit = 0;
	root->coll = 0;
	root->wall = 0;
	root->ground = 0;
	init_game(root, filename);
	initialize_renderer(root);
	initialize_textures(root);
	return (root);
}
