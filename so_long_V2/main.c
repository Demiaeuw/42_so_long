/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:36:53 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/20 17:05:37 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/so_long.h"

int	main(int ac, char **av)
{
	t_so_long	*game;

	main_init(&game);
	if (!main_argument(ac, av))
	{
		free_map(game->map);
		return (0);
	}
	main_map(ac, av, game->map);
	main_window_init(&game);
	sprite_in_window(&game);
	mlx_hook(game->window, 2, 1L<<0, &input_to_move, game);
	mlx_hook(game->window, 17, 1L<<17, main_exit_nowin, game);
	mlx_loop(game->mlx);
	mlx_loop_hook(game->mlx, &input_to_move, game);
	main_free(&game);
	return (0);
}
