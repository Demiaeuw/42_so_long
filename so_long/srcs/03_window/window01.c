/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window01.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:45:17 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/19 16:03:42 by acabarba         ###   ########.fr       */
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
			(*g)->sprite->wall, j * 96, i * 96);
	else if ((*g)->map->tab[i][j] == COLLECT)
		mlx_put_image_to_window((*g)->mlx, (*g)->window,
			(*g)->sprite->collectible, j * 96, i * 96);
	else if ((*g)->map->tab[i][j] == EXIT_CLOSED)
		mlx_put_image_to_window((*g)->mlx, (*g)->window,
			(*g)->sprite->exit_closed, j * 96, i * 96);
	else if ((*g)->map->tab[i][j] == EXIT_OPEN)
		mlx_put_image_to_window((*g)->mlx, (*g)->window,
			(*g)->sprite->exit_open, j * 96, i * 96);
	else if ((*g)->map->tab[i][j] == PLAYER)
		mlx_put_image_to_window((*g)->mlx, (*g)->window,
			(*g)->sprite->player, j * 96, i * 96);
	else if ((*g)->map->tab[i][j] == GROUND)
		mlx_put_image_to_window((*g)->mlx, (*g)->window,
			(*g)->sprite->ground, j * 96, i * 96);
}
