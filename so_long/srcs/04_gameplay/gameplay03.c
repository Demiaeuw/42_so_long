/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gameplay03.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 13:45:56 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/22 12:35:15 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	player_next_postion(t_so_long **game, char c)
{
	if (c == 'u')
	{
		(*game)->position->x_end = (*game)->position->x;
		(*game)->position->y_end = (*game)->position->y - 1;
	}
	else if (c == 'd')
	{
		(*game)->position->x_end = (*game)->position->x;
		(*game)->position->y_end = (*game)->position->y + 1;
	}
	else if (c == 'r')
	{
		(*game)->position->x_end = (*game)->position->x + 1;
		(*game)->position->y_end = (*game)->position->y;
	}
	else if (c == 'l')
	{
		(*game)->position->x_end = (*game)->position->x - 1;
		(*game)->position->y_end = (*game)->position->y;
	}
}

void	player_reset_position(t_so_long **game)
{
	(*game)->position->x = (*game)->position->x_end;
	(*game)->position->y = (*game)->position->y_end;
}

void	refresh_window_after_mouve(t_so_long **game)
{
	window_refresh(game, (*game)->position->y, (*game)->position->x);
	window_refresh(game, (*game)->position->y_end, (*game)->position->x_end);
}

void	modif_exit(t_so_long **game)
{
	int	x_exit;
	int	y_exit;

	x_exit = (*game)->position->x_exit;
	y_exit = (*game)->position->y_exit;
	(*game)->map->tab[y_exit][x_exit] = EXIT_OPEN;
	window_refresh(game, y_exit, x_exit);
}

void	taking_exit(t_so_long **game, int new_y, int new_x)
{
	if ((*game)->map->tab[new_y][new_x] == EXIT_OPEN)
	{
		printendgamevalid(&(*game));
		main_free(&(*game));
		exit(0);
	}
	return ;
}
