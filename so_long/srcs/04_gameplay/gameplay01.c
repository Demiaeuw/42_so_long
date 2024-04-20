/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gameplay01.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 12:13:27 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/20 12:24:42 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	check_move(t_so_long **game, int new_x, int new_y)
{
	if ((*game)->map->tab[new_y][new_x] == WALL)
		return (1);
	else if ((*game)->map->tab[new_y][new_x] == EXIT_CLOSED)
		return (1);
	return (0);
}

