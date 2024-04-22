/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gameplay01.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 12:13:27 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/22 12:38:38 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	check_move(t_so_long **game, int new_y, int new_x)
{
	if ((*game)->map->tab[new_y][new_x] == WALL)
		return (1);
	else if ((*game)->map->tab[new_y][new_x] == EXIT_CLOSED)
		return (1);
	return (0);
}

void	update_map(t_so_long **game, char cell)
{
	int	x_end;
	int	y_end;

	x_end = (*game)->position->x_end;
	y_end = (*game)->position->y_end;
	(*game)->map->tab[(*game)->position->y][(*game)->position->x] = GROUND;
	(*game)->map->tab[y_end][x_end] = PLAYER;
	if (cell == COLLECT)
		(*game)->map->collect -= 1;
}

void	move_player(t_so_long **game, char direction)
{
	char	c;

	player_next_postion(game, direction);
	if (check_move(game, (*game)->position->y_end, (*game)->position->x_end))
		return ;
	taking_exit(game, (*game)->position->y_end, (*game)->position->x_end);
	c = (*game)->map->tab[(*game)->position->y_end][(*game)->position->x_end];
	if (c == GROUND || c == COLLECT)
		update_map(game, c);
	refresh_window_after_mouve(game);
	player_reset_position(game);
	(*game)->nb_pas += 1;
}
