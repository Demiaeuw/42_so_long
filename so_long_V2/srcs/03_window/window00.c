/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window00.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:17:40 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/21 21:13:37 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	main_window_init(t_so_long **game)
{
	printstartgame();
	init_sprites00(game);
	init_sprites01(game);
	init_sprites02(game);
	create_game_window(game);
	printnbpas(game);
	exit_position(game);
	player_position(game);
}

void	create_game_window(t_so_long **game)
{
	if ((*game)->mlx == NULL)
		return ;
	(*game)->window = mlx_new_window((*game)->mlx, (*game)->map->width * 64,
			(*game)->map->height * 64, "So_long ACABARBA");
	if ((*game)->window == NULL)
	{
		free((*game)->mlx);
		return ;
	}
}

void	init_sprites00(t_so_long **game)
{
	int	size;

	size = 64;
	(*game)->sprite->player_right = mlx_xpm_file_to_image((*game)->mlx,
			"./sprite/PLAYER_RIGHT.xpm", &size, &size);
	if ((*game)->sprite->player_right == NULL)
		errormlxcall(errormlxspriteplayer, (*game));
	(*game)->sprite->player_left = mlx_xpm_file_to_image((*game)->mlx,
			"./sprite/PLAYER_LEFT.xpm", &size, &size);
	if ((*game)->sprite->player_left == NULL)
		errormlxcall(errormlxspriteplayer, (*game));
	(*game)->sprite->exit_closed = mlx_xpm_file_to_image((*game)->mlx,
			"./sprite/EXIT_CLOSED.xpm", &size, &size);
	if ((*game)->sprite->exit_closed == NULL)
		errormlxcall(errormlxspriteexitclosed, (*game));
	(*game)->sprite->exit_open = mlx_xpm_file_to_image((*game)->mlx,
			"./sprite/EXIT_OPEN.xpm", &size, &size);
	if ((*game)->sprite->exit_open == NULL)
		errormlxcall(errormlxspriteexitopen, (*game));
}

void	init_sprites01(t_so_long **game)
{
	int	size;

	size = 64;
	(*game)->sprite->ground = mlx_xpm_file_to_image((*game)->mlx,
			"./sprite/GROUND.xpm", &size, &size);
	if ((*game)->sprite->ground == NULL)
		errormlxcall(errormlxspriteground, (*game));
	(*game)->sprite->water = mlx_xpm_file_to_image((*game)->mlx,
			"./sprite/WATER.xpm", &size, &size);
	if ((*game)->sprite->water == NULL)
		errormlxcall(errormlxspriteground, (*game));
	(*game)->sprite->waterground = mlx_xpm_file_to_image((*game)->mlx,
			"./sprite/WATERGROUND.xpm", &size, &size);
	if ((*game)->sprite->waterground == NULL)
		errormlxcall(errormlxspriteground, (*game));
	(*game)->sprite->wall = mlx_xpm_file_to_image((*game)->mlx,
			"./sprite/WALL.xpm", &size, &size);
	if ((*game)->sprite->wall == NULL)
		errormlxcall(errormlxspritewall, (*game));
}

void	init_sprites02(t_so_long **game)
{
	int	size;
	
	size = 64;
	(*game)->sprite->collectible = mlx_xpm_file_to_image((*game)->mlx,
			"./sprite/COLLECT.xpm", &size, &size);
	if ((*game)->sprite->collectible == NULL)
		errormlxcall(errormlxspritecollect, (*game));
	(*game)->sprite->wapon = mlx_xpm_file_to_image((*game)->mlx,
			"./sprite/WAPON.xpm", &size, &size);
	if ((*game)->sprite->wapon == NULL)
		errormlxcall(errormlxwapon, (*game));
	(*game)->sprite->enemy = mlx_xpm_file_to_image((*game)->mlx,
			"./sprite/ENEMY.xpm", &size, &size);
	if ((*game)->sprite->enemy == NULL)
		errormlxcall(errormlxenemy, (*game));
	(*game)->sprite->rock = mlx_xpm_file_to_image((*game)->mlx,
			"./sprite/ROCK.xpm", &size, &size);
	if ((*game)->sprite->enemy == NULL)
		errormlxcall(errormlxspritewall, (*game));
}
