/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:11:07 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/22 16:11:40 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

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
	main_free2(game);
}

void	main_free2(t_so_long **game)
{
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
}
