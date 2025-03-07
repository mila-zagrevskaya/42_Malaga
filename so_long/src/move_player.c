/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:18:53 by lzahrevs          #+#    #+#             */
/*   Updated: 2025/03/04 14:22:13 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/**
 * Moves the player up by one step if the destination cell is empty.
 */
void	move_player_up(t_root *root, int x, int y)
{
	if (root->game->map[y - 1][x] == 0)
		root->game->player.y -= 1;
}

/**
 * Moves the player down by one step if the destination cell is empty.
 */
void	move_player_down(t_root *root, int x, int y)
{
	if (root->game->map[y + 1][x] == 0)
		root->game->player.y += 1;
}

/**
 * Moves the player left by one step if the destination cell is empty.
 */
void	move_player_left(t_root *root, int x, int y)
{
	if (root->game->map[y][x - 1] == 0)
		root->game->player.x -= 1;
}

/**
 * Moves the player right by one step if the destination cell is empty.
 */
void	move_player_right(t_root *root, int x, int y)
{
	if (root->game->map[y][x + 1] == 0)
		root->game->player.x += 1;
}
