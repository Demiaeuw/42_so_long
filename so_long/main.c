/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:36:53 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/18 17:30:13 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/so_long.h"

int	main(int ac, char **av)
{
	t_so_long	*game;

	
	// init
	game = malloc(sizeof(t_so_long));
	game->map = init_map();
	//

	if (!main_argument(ac, av))
	{
		free_map(game->map);
		return (0);
	}
	main_map(ac, av, game->map);

	// //
	print_map(game->map);
	ft_printf("\nhauteur : %d\nlargeur : %d\nNb collectible : %d\n", game->map->height, game->map-> width, game->map->collect);
	// //


	
	ft_printf("test ouverture window");
	main_window(game);
	


	// free 
	free_map(game->map);
	//
	ft_printf("\n\nAll good\n\n");
	return (0);
}
