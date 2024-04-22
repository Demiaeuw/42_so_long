/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapdfs01.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:56:18 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/22 18:06:01 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	dfs(int x, int y, int collect, char **tab)
{
	if (x < 0 || y < 0 || tab[y][x] == '1')
		return (0);
	if (tab[y][x] == 'E' && collect > 0)
		return (0);
	if (tab[y][x] == 'E' && collect == 0)
		return (1);
	if (tab[y][x] == 'C')
		collect--;
	tab[y][x] = '1';
	if (dfs(x + 1, y, collect, tab)
		|| dfs(x - 1, y, collect, tab)
		|| dfs(x, y + 1, collect, tab)
		|| dfs(x, y - 1, collect, tab))
		return (1);
	tab[y][x] = '0';
	return (0);
}

int	dfs_player_position_x(t_so_long **game)
{
	int	x;
	int	y;

	y = 0;
	while ((*game)->map->dfs_tab[y])
	{
		x = 0;
		while ((*game)->map->dfs_tab[y][x])
		{
			if ((*game)->map->dfs_tab[y][x] == PLAYER)
			{
				return (x);
			}
			x++;
		}
		y++;
	}
	return (0);
}

int	dfs_player_position_y(t_so_long **game)
{
	int	x;
	int	y;

	y = 0;
	while ((*game)->map->dfs_tab[y])
	{
		x = 0;
		while ((*game)->map->dfs_tab[y][x])
		{
			if ((*game)->map->dfs_tab[y][x] == PLAYER)
			{
				return (y);
			}
			x++;
		}
		y++;
	}
	return (0);
}
