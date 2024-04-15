/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map01.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:18:20 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/15 17:18:20 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	main_map_add(char *filename, t_map *map)
{
	add_hight(filename, map);
	add_with(filename, map);
	add_malloc_tab(map);
	add_map(filename, map);
	return ;
}

void	add_map(char *filename, t_map *map)
{
	char	c;
	int		fd;
	int		i;
	int		k;

	i = 0;
	k = 0;
	fd = open(filename, O_RDONLY);
	while (read(fd, &c, 1) > 0)
	{
		while (c != '\n')
		{
			map->tab[i][k] = c;
			k++;
		}
		map->tab[i][k] = '\n';
		k = 0;
		i++;
	}
	close(fd);
	return ;
}

void	add_hight(char *filename, t_map *map)
{
	char	c;
	int		fd;
	int		count;

	count = 0;
	fd = open(filename, O_RDONLY);
	while (read(fd, &c, 1) > 0)
	{
		while (c == '\n')
			count++;
	}
	map->height = count;
	close(fd);
	return ;
}

void	add_with(char *filename, t_map *map)
{
	char	c;
	int		fd;
	int		count;

	count = 0;
	fd = open(filename, O_RDONLY);
	while (read(fd, &c, 1) > 0)
	{
		while (c != '\n')
		{
			count++;
			break ;
		}
		break ;
	}
	count++;
	map->width = count;
	close(fd);
	return ;	
}

void	add_malloc_tab(t_map *map)
{
	int	i;

	i = 0;
	map->tab = malloc(sizeof(char *) * map->height);
	if (map->tab == NULL)
	{
		errormalloc();
		return ;
	}
	while (i < map->height)
	{
		map->tab[i] = malloc(sizeof(char) * (map->width +1));
		if (map->tab[i] == NULL)
		{
			errormalloc();
			return ;
		}
		i++;
	}
	return ;
}
