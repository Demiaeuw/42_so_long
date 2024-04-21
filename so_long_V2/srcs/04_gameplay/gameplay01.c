/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gameplay01.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 12:13:27 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/21 18:44:54 by acabarba         ###   ########.fr       */
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

void	player_up(t_so_long **game)
{
	player_next_postion(game, 'u');
	if (check_move(game, (*game)->position->y_end, (*game)->position->x_end))
		return ;
	taking_exit(game, (*game)->position->y_end, (*game)->position->x_end);
	if ((*game)->map->tab[(*game)->position->y_end][(*game)->position->x_end] == GROUND)
	{
		(*game)->map->tab[(*game)->position->y][(*game)->position->x] = GROUND;
		(*game)->map->tab[(*game)->position->y_end][(*game)->position->x_end] = PLAYER;
	}
	else if ((*game)->map->tab[(*game)->position->y_end][(*game)->position->x_end] == COLLECT)
	{
		(*game)->map->tab[(*game)->position->y][(*game)->position->x] = GROUND;
		(*game)->map->tab[(*game)->position->y_end][(*game)->position->x_end] = PLAYER;
		(*game)->map->collect -= 1;
	}
	else if ((*game)->map->tab[(*game)->position->y_end][(*game)->position->x_end] == WAPON)
	{
		(*game)->map->tab[(*game)->position->y][(*game)->position->x] = GROUND;
		(*game)->map->tab[(*game)->position->y_end][(*game)->position->x_end] = PLAYER;
		(*game)->payer_wapon = 1;
	}
	refresh_window_after_mouve(game);
	player_reset_position(game);
	(*game)->nb_pas += 1;

}

void	player_down(t_so_long **game)
{
	player_next_postion(game, 'd');
	if (check_move(game, (*game)->position->y_end, (*game)->position->x_end))
		return ;
	taking_exit(game, (*game)->position->y_end, (*game)->position->x_end);
	if ((*game)->map->tab[(*game)->position->y_end][(*game)->position->x_end] == GROUND)
	{
		(*game)->map->tab[(*game)->position->y][(*game)->position->x] = GROUND;
		(*game)->map->tab[(*game)->position->y_end][(*game)->position->x_end] = PLAYER;
	}
	else if ((*game)->map->tab[(*game)->position->y_end][(*game)->position->x_end] == COLLECT)
	{
		(*game)->map->tab[(*game)->position->y][(*game)->position->x] = GROUND;
		(*game)->map->tab[(*game)->position->y_end][(*game)->position->x_end] = PLAYER;
		(*game)->map->collect -= 1;
	}
	else if ((*game)->map->tab[(*game)->position->y_end][(*game)->position->x_end] == WAPON)
	{
		(*game)->map->tab[(*game)->position->y][(*game)->position->x] = GROUND;
		(*game)->map->tab[(*game)->position->y_end][(*game)->position->x_end] = PLAYER;
		(*game)->payer_wapon = 1;
	}
	refresh_window_after_mouve(game);
	player_reset_position(game);
	(*game)->nb_pas += 1;
	
}

void	player_left(t_so_long **game)
{
	player_next_postion(game, 'l');
	if (check_move(game, (*game)->position->y_end, (*game)->position->x_end))
		return ;
	taking_exit(game, (*game)->position->y_end, (*game)->position->x_end);
	if ((*game)->map->tab[(*game)->position->y_end][(*game)->position->x_end] == GROUND)
	{
		(*game)->map->tab[(*game)->position->y][(*game)->position->x] = GROUND;
		(*game)->map->tab[(*game)->position->y_end][(*game)->position->x_end] = PLAYER;
	}
	else if ((*game)->map->tab[(*game)->position->y_end][(*game)->position->x_end] == COLLECT)
	{
		(*game)->map->tab[(*game)->position->y][(*game)->position->x] = GROUND;
		(*game)->map->tab[(*game)->position->y_end][(*game)->position->x_end] = PLAYER;
		(*game)->map->collect -= 1;
	}
	else if ((*game)->map->tab[(*game)->position->y_end][(*game)->position->x_end] == WAPON)
	{
		(*game)->map->tab[(*game)->position->y][(*game)->position->x] = GROUND;
		(*game)->map->tab[(*game)->position->y_end][(*game)->position->x_end] = PLAYER;
		(*game)->payer_wapon = 1;
	}
	refresh_window_after_mouve(game);
	player_reset_position(game);
	(*game)->nb_pas += 1;
	
}

void	player_right(t_so_long **game)
{
	player_next_postion(game, 'r');
	if (check_move(game, (*game)->position->y_end, (*game)->position->x_end))
		return ;
	taking_exit(game, (*game)->position->y_end, (*game)->position->x_end);
	if ((*game)->map->tab[(*game)->position->y_end][(*game)->position->x_end] == GROUND)
	{
		(*game)->map->tab[(*game)->position->y][(*game)->position->x] = GROUND;
		(*game)->map->tab[(*game)->position->y_end][(*game)->position->x_end] = PLAYER;
	}
	else if ((*game)->map->tab[(*game)->position->y_end][(*game)->position->x_end] == COLLECT)
	{
		(*game)->map->tab[(*game)->position->y][(*game)->position->x] = GROUND;
		(*game)->map->tab[(*game)->position->y_end][(*game)->position->x_end] = PLAYER;
		(*game)->map->collect -= 1;
	}
	else if ((*game)->map->tab[(*game)->position->y_end][(*game)->position->x_end] == WAPON)
	{
		(*game)->map->tab[(*game)->position->y][(*game)->position->x] = GROUND;
		(*game)->map->tab[(*game)->position->y_end][(*game)->position->x_end] = PLAYER;
		(*game)->payer_wapon = 1;
	}
	refresh_window_after_mouve(game);
	player_reset_position(game);
	(*game)->nb_pas += 1;
	
}
