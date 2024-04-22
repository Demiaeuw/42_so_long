/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:46:35 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/22 16:13:56 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	liberer_str(char *str)
{
	free(str);
	return ;
}

void	liberer_str_tab(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		liberer_str(str[i]);
		i++;
	}
	free(str);
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
		free_map2(map);
	}
}

void	free_map2(t_map *map)
{
	int	i;

	if (map->dfs_tab)
	{
		i = 0;
		while (i < map->height)
		{
			free(map->dfs_tab[i]);
			i++;
		}
		free(map->dfs_tab);
	}
	free(map);
}
