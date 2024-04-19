/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:17:40 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/18 17:33:08 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	main_window(t_so_long *game)
{
	create_game_window(game);
}

void	create_game_window(t_so_long *game)
{
	if (game->mlx == NULL)
		return ;
	game->window = mlx_new_window(game->mlx, game->map->width * 96,
			game->map->height * 96, "So_long ACABARBA");
	if (game->window == NULL)
	{
		free(game->mlx);
		return ;
	}
}
