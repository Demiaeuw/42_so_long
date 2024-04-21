/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window01.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:45:17 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/21 21:25:42 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	sprite_in_window(t_so_long **game)
{
	int	i;
	int	j;

	i = 0;
	while ((*game)->map->tab[i])
	{
		j = 0;
		while ((*game)->map->tab[i][j])
		{
			window_refresh(&(*game), i, j);
			j++;
		}
		i++;
	}
}

void	window_refresh(t_so_long **g, int i, int j)
{
	if ((*g)->map->tab[i][j] == WALL)
		mlx_put_image_to_window((*g)->mlx, (*g)->window,
			(*g)->sprite->wall, j * 64, i * 64);
	else if ((*g)->map->tab[i][j] == COLLECT)
		mlx_put_image_to_window((*g)->mlx, (*g)->window,
			(*g)->sprite->collectible, j * 64, i * 64);
	else if ((*g)->map->tab[i][j] == EXIT_CLOSED)
		mlx_put_image_to_window((*g)->mlx, (*g)->window,
			(*g)->sprite->exit_closed, j * 64, i * 64);
	else if ((*g)->map->tab[i][j] == EXIT_OPEN)
		mlx_put_image_to_window((*g)->mlx, (*g)->window,
			(*g)->sprite->exit_open, j * 64, i * 64);
	else if ((*g)->map->tab[i][j] == PLAYER)
		mlx_put_image_to_window((*g)->mlx, (*g)->window,
			(*g)->sprite->player_right, j * 64, i * 64);
	window_refresh2(g, i, j);
}

void	window_refresh2(t_so_long **g, int i, int j)
{
	if ((*g)->map->tab[i][j] == GROUND)
		mlx_put_image_to_window((*g)->mlx, (*g)->window,
			(*g)->sprite->ground, j * 64, i * 64);
	else if ((*g)->map->tab[i][j] == ROCK)
		mlx_put_image_to_window((*g)->mlx, (*g)->window,
			(*g)->sprite->rock, j * 64, i * 64);
	else if ((*g)->map->tab[i][j] == WAPON)
		mlx_put_image_to_window((*g)->mlx, (*g)->window,
			(*g)->sprite->wapon, j * 64, i * 64);
	else if ((*g)->map->tab[i][j] == ENEMY)
		mlx_put_image_to_window((*g)->mlx, (*g)->window,
			(*g)->sprite->enemy, j * 64, i * 64);
	else if ((*g)->map->tab[i][j] == WATER)
		mlx_put_image_to_window((*g)->mlx, (*g)->window,
			(*g)->sprite->water, j * 64, i * 64);
	else if ((*g)->map->tab[i][j] == WATERGROUND)
		mlx_put_image_to_window((*g)->mlx, (*g)->window,
			(*g)->sprite->waterground, j * 64, i * 64);
}