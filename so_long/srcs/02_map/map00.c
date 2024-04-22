/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map00.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:18:10 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/22 16:01:02 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	main_map(int ac, char **av, t_map *map)
{
	(void)ac;
	add_hight(av[1], map);
	add_with(av[1], map);
	add_malloc_tab(map);
	add_map(av[1], map);
	main_map_check(map);
	dfs_add_malloc_tab(map);
	dfs_add_map(av[1], map);
}

t_map	*init_map(void)
{
	t_map	*map;

	map = malloc(sizeof(t_map));
	if (map == NULL)
	{
		perror("Erreur d'allocation de mémoire");
		exit(EXIT_FAILURE);
	}
	map->height = 0;
	map->width = 0;
	map->tab = NULL;
	map->dfs_tab = NULL;
	return (map);
}
