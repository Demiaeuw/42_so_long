/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:16:53 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/19 16:59:42 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	main_init(t_so_long **game)
{
	*game = malloc(sizeof(t_so_long));
	(*game)->map = init_map();
	(*game)->mlx = mlx_init();
	(*game)->sprite = malloc(sizeof(t_sprites));
	(*game)->nb_pas = 0;
}

int	main_exit(t_so_long *game)
{
	main_free(&game);
	return (0);
}
