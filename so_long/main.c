/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:36:53 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/12 14:36:53 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/so_long.h"

int	main(int ac, char **av)
{
	t_map *map;

	// init map
	map = init_map();
	//

	if (!main_argument(ac, av))
	{
		free_map(map);
		return (0);
	}
	main_map(ac, av, map);

	// free 
	free_map(map);
	//
	ft_printf("\n\nAll good\n\n");
	return (0);
}

