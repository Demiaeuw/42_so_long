/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gameplay03.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:41:54 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/21 21:57:20 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	change_sprite_wapon(t_so_long **game)
{
	int	size;

	size = 64;
	(*game)->sprite->player_right = mlx_xpm_file_to_image((*game)->mlx,
		"./sprite/PLAYER_WAPON_RIGHT.xpm", &size, &size);
	(*game)->sprite->player_left = mlx_xpm_file_to_image((*game)->mlx,
		"./sprite/PLAYER_WAPON_LEFT.xpm", &size, &size);
	(*game)->sprite->enemy = mlx_xpm_file_to_image((*game)->mlx,
		"./sprite/ENEMY_WAPON.xpm", &size, &size);
	sprite_in_window(&(*game));
}

void	game_over(t_so_long **game)
{
	ft_printf("\nGAME OVER\n");
	main_free(&(*game));
	exit(0);
}

