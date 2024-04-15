/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map00.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:18:10 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/15 17:18:10 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	main_map(int ac, char **av, t_map *map)
{
	main_map_add(av[1], map);
}

t_map	*init_map(void)
{
	t_map	*map;

	map = malloc(sizeof(t_map));
	if (map == NULL)
	{
		errormalloc();
		return ;
	}
	map->height = 0;
	map->width = 0;
	map->tab = NULL;
	return (map);
}

void	free_map(t_map *map)
{
	int	i;

	if (map)
	{
		if (map->tab)
		{
			i = 0;
			while (i < map->height)
			{
				free(map->tab[i]);
				i++;
			}
			free(map->tab);
		}
		free(map);
	}
}
