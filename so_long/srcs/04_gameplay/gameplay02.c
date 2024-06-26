/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gameplay02.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:28:04 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/22 12:28:21 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	player_up(t_so_long **game)
{
	move_player(game, 'u');
}

void	player_down(t_so_long **game)
{
	move_player(game, 'd');
}

void	player_left(t_so_long **game)
{
	move_player(game, 'l');
}

void	player_right(t_so_long **game)
{
	move_player(game, 'r');
}
