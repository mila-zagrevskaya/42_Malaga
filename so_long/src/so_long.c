/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:18:09 by lzahrevs          #+#    #+#             */
/*   Updated: 2025/03/04 14:23:49 by lzahrevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/**
 * Checks if the file has a valid .ber extension.
 */
int	is_valid_ber_extension(char *file)
{
	int				len;

	len = ft_strlen(file);
	if (file == 0)
		return (0);
	if (len < 5)
		return (0);
	if (ft_strcmp(file + len - 4, ".ber") != 0)
		return (0);
	return (1);
}

int	main(int ac, char *av[])
{
	t_root			*root;

	if (ac != 2)
		exit_with_error("Invalid number of arguments!", 0);
	if (is_valid_ber_extension(av[1]) == 0)
		exit_with_error("Invalid argument! (<name>.ber)", 0);
	root = initialize_root(av[1]);
	render_game(root);
	mlx_hook(root->mlx_win, 2, 1L << 0, on_key_press, root);
	mlx_hook(root->mlx_win, 3, 1L << 1, on_key_release, root);
	mlx_hook(root->mlx_win, 17, 1L << 17, on_window_close, root);
	mlx_loop(root->mlx);
	return (0);
}
