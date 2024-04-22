/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 20:09:11 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/22 16:17:08 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/so_long.h"

void	print_map(t_map *map)
{
	int	i;
	int	j;

	i = 0;
	while (i < map->height)
	{
		j = 0;
		while (j < map->width)
		{
			ft_printf("%c", map->tab[i][j]);
			j++;
		}
		ft_printf("\n");
		i++;
	}
}

void	print_dfs_map(t_map *map)
{
	int	i;
	int	j;

	i = 0;
	while (i < map->height)
	{
		j = 0;
		while (j < map->width)
		{
			ft_printf("%c", map->dfs_tab[i][j]);
			j++;
		}
		ft_printf("\n");
		i++;
	}
}

void	print_map_game(t_so_long **game)
{
	print_map((*game)->map);
}

void	print_dfs_map_game(t_so_long **game)
{
	print_dfs_map((*game)->map);
}
