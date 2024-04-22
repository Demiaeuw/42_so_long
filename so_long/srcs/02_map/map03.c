/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map03.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 22:46:32 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/22 17:49:02 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	check_collectible(t_map *map)
{
	int	i;
	int	j;
	int	count_c;

	count_c = 0;
	i = 0;
	while (map->tab[i])
	{
		j = 0;
		while (map->tab[i][j])
		{
			if (map->tab[i][j] == COLLECT)
				count_c++;
			j++;
		}
		i++;
	}
	if (count_c < 1)
		errormapcall(errormapcollect, map);
	map->collect = count_c;
	return ;
}

void	exit_position(t_so_long **game)
{
	int	x;
	int	y;

	y = 0;
	while ((*game)->map->tab[y])
	{
		x = 0;
		while ((*game)->map->tab[y][x])
		{
			if ((*game)->map->tab[y][x] == EXIT_CLOSED)
			{
				(*game)->position->x_exit = x;
				(*game)->position->y_exit = y;
			}
			x++;
		}
		y++;
	}
	return ;
}

void	player_position(t_so_long **game)
{
	int	x;
	int	y;

	y = 0;
	while ((*game)->map->tab[y])
	{
		x = 0;
		while ((*game)->map->tab[y][x])
		{
			if ((*game)->map->tab[y][x] == PLAYER)
			{
				(*game)->position->x = x;
				(*game)->position->y = y;
			}
			x++;
		}
		y++;
	}
	return ;
}
