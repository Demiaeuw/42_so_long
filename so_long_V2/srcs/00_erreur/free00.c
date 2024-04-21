/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:46:35 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/20 13:25:04 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	liberer_str(char *str)
{
	free(str);
	return ;
}

void	liberer_str_tab(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		liberer_str(str[i]);
		i++;
	}
	free(str);
}

void	free_map(t_map *map)
{
	int	i;

	if (map)
	{
		if (map->tab)
		{
			i = 0;
			while (i < map->height)
			{
				free(map->tab[i]);
				i++;
			}
			free(map->tab);
		}
		free(map);
	}
}

void	main_free(t_so_long **game)
{
	if (!game)
		return ;
	if ((*game)->sprite->player)
		mlx_destroy_image((*game)->mlx, (*game)->sprite->player);
	if ((*game)->sprite->wall)
		mlx_destroy_image((*game)->mlx, (*game)->sprite->wall);
	if ((*game)->sprite->ground)
		mlx_destroy_image((*game)->mlx, (*game)->sprite->ground);
	if ((*game)->sprite->collectible)
		mlx_destroy_image((*game)->mlx, (*game)->sprite->collectible);
	if ((*game)->sprite->exit_closed)
		mlx_destroy_image((*game)->mlx, (*game)->sprite->exit_closed);
	if ((*game)->sprite->exit_open)
		mlx_destroy_image((*game)->mlx, (*game)->sprite->exit_open);
	if ((*game)->mlx && (*game)->window)
		mlx_destroy_window((*game)->mlx, (*game)->window);
	if ((*game)->mlx)
		mlx_destroy_display((*game)->mlx);
	if ((*game)->map)
		free_map((*game)->map);
	if ((*game)->mlx)
		free((*game)->mlx);
	if ((*game)->sprite)
		free((*game)->sprite);
	if ((*game)->position)
		free((*game)->position);
	if ((*game))
		free(*game);
	return ;
}
