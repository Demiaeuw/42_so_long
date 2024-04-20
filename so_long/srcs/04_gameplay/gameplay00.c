/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gameplay00.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:57:11 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/20 17:02:18 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

// void	main_gameplay(void)
// {

// }

int	input_to_move(int keycode, t_so_long *game)
{
	if (keycode == KEY_Z || keycode == KEY_UP)
		player_up(&game);
	if (keycode == KEY_S || keycode == KEY_DOWN)
		player_down(&game);
	if (keycode == KEY_Q || keycode == KEY_LEFT)
		player_left(&game);
	if (keycode == KEY_D || keycode == KEY_RIGHT)
		player_right(&game);
	if (keycode == KEY_ESC)
		close_echap(game);
	ft_printf("%d", game->map->collect);
	// if (game->map->collect == 0)
	// 	modif_exit(&game);
	
	return (0);
}
