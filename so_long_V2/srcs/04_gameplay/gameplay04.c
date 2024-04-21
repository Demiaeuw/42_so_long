/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gameplay04.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 22:57:47 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/21 23:26:54 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	select_language(t_so_long **game, int ac, char **av)
{
	(void)av;
	if (ac == 2)
	{
		(*game)->keybind->up = KEY_Z;
		(*game)->keybind->down = KEY_S;
		(*game)->keybind->right = KEY_D;
		(*game)->keybind->left = KEY_Q;
	}
	else if (ac == 3)
	{
		(*game)->keybind->up = KEY_W;
		(*game)->keybind->down = KEY_S;
		(*game)->keybind->right = KEY_D;
		(*game)->keybind->left = KEY_A;
	}
}