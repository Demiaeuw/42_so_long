/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map01.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:18:20 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/25 03:50:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	add_hight(char *filename, t_map *map)
{
	char	c;
	int		fd;
	int		count;

	count = 0;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		perror("Erreur d'ouverture du fichier");
		exit(EXIT_FAILURE);
	}
	while (read(fd, &c, 1) > 0)
	{
		if (c == '\n')
			count++;
	}
	map->height = count + 1;
	close(fd);
}

void	add_with(char *filename, t_map *map)
{
	char	c;
	int		fd;
	int		count;

	count = 0;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		perror("Erreur d'ouverture du fichier");
		exit(EXIT_FAILURE);
	}
	while (read(fd, &c, 1) > 0)
	{
		if (c == '\n')
			break ;
		count++;
	}
	map->width = count;
	close(fd);
}

void	add_malloc_tab(t_map *map)
{
	int	i;

	map->tab = malloc(sizeof(char *) * map->height + 1);
	if (map->tab == NULL)
	{
		perror("Erreur d'allocation de mémoire");
		exit(EXIT_FAILURE);
	}
	i = 0;
	while (i < map->height)
	{
		map->tab[i] = malloc(sizeof(char) * (map->width + 1));
		if (map->tab[i] == NULL)
		{
			perror("Erreur d'allocation de mémoire");
			exit(EXIT_FAILURE);
		}
		i++;
		map->tab[map->height] = (NULL);
	}
}

void	add_map(char *filename, t_map *map)
{
	char	c;
	int		fd;
	int		i;
	int		k;
	int		ret;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		erroropen();
	i = 0;
	ret = read(fd, &c, 1);
	while (ret > 0)
	{
		k = 0;
		while (c != '\n' && ret > 0)
		{
			map->tab[i][k] = c;
			k++;
			ret = read(fd, &c, 1);
		}
		map->tab[i][k] = '\0';
		i++;
		ret = read(fd, &c, 1);
	}
	close(fd);
}
