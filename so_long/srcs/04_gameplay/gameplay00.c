/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gameplay00.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:57:11 by acabarba          #+#    #+#             */
/*   Updated: 2024/05/27 19:04:45 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

// void	main_gameplay(void)
// {

// }

int	input_to_move(int keycode, t_so_long *game)
{
	if (keycode == KEY_Z || keycode == KEY_UP || keycode == KEY_W)
		player_up(&game);
	if (keycode == KEY_S || keycode == KEY_DOWN)
		player_down(&game);
	if (keycode == KEY_Q || keycode == KEY_LEFT || keycode == KEY_A)
		player_left(&game);
	if (keycode == KEY_D || keycode == KEY_RIGHT)
		player_right(&game);
	if (keycode == KEY_ESC)
		close_echap(game);
	printnbpas(&game);
	if (game->map->collect == 0)
		modif_exit(&game);
	return (0);
}
