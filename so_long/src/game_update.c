/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_update.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:19:08 by lzahrevs          #+#    #+#             */
/*   Updated: 2025/03/04 14:20:15 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/**
 * Increments the player's move count and prints it whenever the player moves.
 */
static void	track_player_move(t_root *root, int x, int y)
{
	if (root->game->player.x != x || root->game->player.y != y)
	{
		root->game->player_move++;
		ft_putnbr_fd(root->game->player_move, 1);
		ft_putendl_fd(" < Number of moves", 1);
	}
}

/**
 * Checks if the player has collected any items and updates
 * the collectable counter.
 */
static void	check_for_collectables(t_root *root)
{
	int				k;

	k = 0;
	while (k < root->game->count_coll)
	{
		if (root->game->coll[k].x == root->game->player.x
			&& root->game->coll[k].y == root->game->player.y)
		{
			root->game->coll[k].x = -1;
			root->game->coll[k].y = -1;
			root->game->player_coll++;
		}
		k++;
	}
}

/**
 * Updates the game state, moves the player, checks for collectables,
 * and handles game rendering
 */
void	update_game_state(t_root *root)
{
	int				x;
	int				y;

	x = root->game->player.x;
	y = root->game->player.y;
	if (root->game->player_up != 0)
		move_player_up(root, x, y);
	else if (root->game->player_down != 0)
		move_player_down(root, x, y);
	else if (root->game->player_left != 0)
		move_player_left(root, x, y);
	else if (root->game->player_right != 0)
		move_player_right(root, x, y);
	track_player_move(root, x, y);
	check_for_collectables(root);
	render_game(root);
	if (root->game->exit.x == root->game->player.x
		&& root->game->exit.y == root->game->player.y)
		if (root->game->count_coll == root->game->player_coll)
			cleanup_and_exit(root, 0, 0);
}
