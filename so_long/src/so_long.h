/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:18:15 by lzahrevs          #+#    #+#             */
/*   Updated: 2025/03/04 14:23:59 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include <string.h>
# include <errno.h>
# include <mlx.h>
# include <mlx_int.h>
# include "libft.h"

typedef struct s_coord
{
	int				x;
	int				y;
}				t_coord;

typedef struct s_game
{
	int				**map;
	int				height;
	int				width;
	t_coord			player;
	int				player_up;
	int				player_down;
	int				player_left;
	int				player_right;
	int				player_move;
	int				player_coll;
	t_coord			exit;
	t_coord			*coll;
	int				count_coll;
	int				count_exit;
	int				count_player;
}				t_game;

typedef struct s_root
{
	void			*mlx;
	void			*mlx_win;
	t_img			*mlx_img;
	t_game			*game;
	t_img			*player;
	t_img			*exit;
	t_img			*coll;
	t_img			*wall;
	t_img			*ground;
}				t_root;

void			exit_with_error(char *errmsg, int errnum);

void			render_game(t_root *root);

int				on_key_press(int keycode, t_root *root);
int				on_key_release(int keycode, t_root *root);
int				on_window_close(int keycode, t_root *root);

void			free_game(t_game *game);

void			init_game(t_root *root, char *filename);

void			calculate_map_height(t_root *root, char *file);
void			calculate_map_width(t_root *root, char *file);

void			initialize_map(t_root *root, char *filename);

void			validate_map_structure(t_root *root, char *file);

void			parse_map(t_root *root, char *file);

void			setup_map_structure(t_root *root, char *file);

unsigned int	get_pixel_color(t_img *img, int x, int y);
void			set_pixel_color(t_img *mlx_img, int x, int y, int color);
unsigned int	rgb_to_int(int o, int r, int g, int b);

void			move_player_up(t_root *root, int x, int y);
void			move_player_down(t_root *root, int x, int y);
void			move_player_left(t_root *root, int x, int y);
void			move_player_right(t_root *root, int x, int y);

void			cleanup_and_exit(t_root *root, char *errmsg, int errnum);

t_root			*initialize_root(char *filename);

void			update_game_state(t_root *root);

#endif
