/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:46:35 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/19 16:18:12 by acabarba         ###   ########.fr       */
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
	if ((*game)->map->tab)
		liberer_str_tab((*game)->map->tab);
	// if ((*game)->map->maptest)
	// 	free_tab_maptest(game);
	if ((*game)->mlx)
		free((*game)->mlx);
	if ((*game)->sprite)
		free((*game)->sprite);
	exit (0);
}
