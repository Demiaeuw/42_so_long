/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:16:53 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/20 13:26:00 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	main_init(t_so_long **game)
{
	*game = malloc(sizeof(t_so_long));
	(*game)->map = init_map();
	(*game)->mlx = mlx_init();
	(*game)->sprite = malloc(sizeof(t_sprites));
	(*game)->nb_pas = 0;
	init_position(game);
}

int	main_exit_nowin(t_so_long *game)
{
	printendgameechec();
	main_free(&game);
	exit(0);
}

void	init_position(t_so_long **game)
{
	(*game)->position = malloc(sizeof(t_position));
	(*game)->position->x = 0;
	(*game)->position->x_end = 0;
	(*game)->position->x_exit = 0;
	(*game)->position->y = 0;
	(*game)->position->y_end = 0;
	(*game)->position->y_exit = 0;
}
