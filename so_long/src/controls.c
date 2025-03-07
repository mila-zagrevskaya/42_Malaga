/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controls.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:19:27 by lzahrevs          #+#    #+#             */
/*   Updated: 2025/03/04 14:19:36 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/**
 * Handles key press events. 
 * Moves the player or exits the game if ESC is pressed.
 */
int	on_key_press(int keycode, t_root *root)
{
	if (keycode == 65307)
		cleanup_and_exit(root, 0, 0);
	if (keycode == 119 || keycode == 65362)
		root->game->player_up = 1;
	if (keycode == 115 || keycode == 65364)
		root->game->player_down = 1;
	if (keycode == 97 || keycode == 65361)
		root->game->player_left = 1;
	if (keycode == 100 || keycode == 65363)
		root->game->player_right = 1;
	update_game_state(root);
	return (0);
}

/**
 * Handles key release events.
 * Stops the player's movement when a key is released.
 */
int	on_key_release(int keycode, t_root *root)
{
	if (keycode == 119 || keycode == 65362)
		root->game->player_up = 0;
	if (keycode == 115 || keycode == 65364)
		root->game->player_down = 0;
	if (keycode == 97 || keycode == 65361)
		root->game->player_left = 0;
	if (keycode == 100 || keycode == 65363)
		root->game->player_right = 0;
	update_game_state(root);
	return (0);
}

/**
 * Handles the window close event.
 * Terminates the game when the window is closed.
 */
int	on_window_close(int keycode, t_root *root)
{
	(void)keycode;
	(void)root;
	cleanup_and_exit(0, 0, 0);
	return (0);
}
