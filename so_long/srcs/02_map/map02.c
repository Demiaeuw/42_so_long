/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map02.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 20:23:01 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/25 04:03:23 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	main_map_check(t_map *map)
{
	check_content(map);
	check_rectangle(map);
	check_wall(map);
	check_playerandexit(map);
	check_collectible(map);
}

void	check_content(t_map *map)
{
	int	i;
	int	j;

	i = 0;
	while (map->tab[i])
	{
		j = 0;
		while (map->tab[i][j] != '\0')
		{
			if (map->tab[i][j] != WALL
				&& map->tab[i][j] != GROUND
				&& map->tab[i][j] != PLAYER
				&& map->tab[i][j] != EXIT_CLOSED
				&& map->tab[i][j] != COLLECT
				&& map->tab[i][j] != '\n'
				&& map->tab[i][j] != 13)
				errormapcall(errormapcontent, map);
			j++;
		}
		i++;
	}
}

void	check_rectangle(t_map *map)
{
	int	i;
	int	j;

	i = 0;
	if (map->height < 2)
		errormapcall(errormaptaille, map);
	while (map->tab[i])
	{
		j = 0;
		while (map->tab[i][j]
			&& map->tab[i][j] != '\n'
			&& map->tab[i][j] != '\r')
			j++;
		if (j != map->width)
			errormapcall(errormaprectangle, map);
		i++;
	}
	if (i != map->height)
		errormapcall(errormaprectangle, map);
	return ;
}

void	check_wall(t_map *map)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < map->width)
	{
		if (map->tab[0][i] != WALL && map->tab[0][i] != '\r')
			errormapcall(errormapwall, map);
		if (map->tab[map->height - 1][i] != WALL
			&& map->tab[map->height - 1][i] != '\r')
			errormapcall(errormapwall, map);
		i++;
	}
	while (j < map->height)
	{
		if (map->tab[j][0] != WALL && map->tab[j][0] != '\r')
			errormapcall(errormapwall, map);
		if (map->tab[j][map->width - 1] != WALL
			&& map->tab[j][map->width - 1] != '\r')
			errormapcall(errormapwall, map);
		j++;
	}
	return ;
}

void	check_playerandexit(t_map *map)
{
	int	i;
	int	j;
	int	count_e;
	int	count_p;

	count_e = 0;
	count_p = 0;
	i = 0;
	while (map->tab[i])
	{
		j = 0;
		while (map->tab[i][j])
		{
			if (map->tab[i][j] == EXIT_CLOSED)
				count_e++;
			if (map->tab[i][j] == PLAYER)
				count_p++;
			j++;
		}
		i++;
	}
	if (count_e != 1)
		errormapcall(errormapexit, map);
	else if (count_p != 1)
		errormapcall(errormapplayer, map);
}
