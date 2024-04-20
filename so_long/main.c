/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:36:53 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/20 13:28:07 by acabarba         ###   ########.fr       */
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
	printf("exit_x : %d, exit_y : %d\n", game->position->x_exit, game->position->y_exit);
	mlx_hook(game->window, 2, 1L<<0, close_echap, game);
	mlx_hook(game->window, 17, 1L<<17, main_exit_nowin, game);
	mlx_loop(game->mlx);
	main_free(&game);
	return (0);
}
