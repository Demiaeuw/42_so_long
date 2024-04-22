/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapdfs00.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:57:41 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/22 18:06:47 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	main_dfs(t_so_long **game)
{
	int	test;
	int	x_temp;
	int	y_temp;
	int	collect_temp;

	x_temp = dfs_player_position_x(&(*game));
	y_temp = dfs_player_position_y(&(*game));
	collect_temp = (*game)->map->collect;
	test = dfs(x_temp, y_temp, collect_temp, (*game)->map->dfs_tab);
	if (test == 1)
		return ;
	else
	{
		ft_putendl_fd("\nErreur", 1);
		ft_putendl_fd("\nMap non réaliable\n", 1);
		main_free(game);
		exit(0);
	}
}

void	dfs_add_malloc_tab(t_map *map)
{
	int	i;

	map->dfs_tab = malloc(sizeof(char *) * map->height + 1);
	if (map->dfs_tab == NULL)
	{
		perror("Erreur d'allocation de mémoire");
		exit(EXIT_FAILURE);
	}
	i = 0;
	while (i < map->height)
	{
		map->dfs_tab[i] = malloc(sizeof(char) * (map->width + 1));
		if (map->dfs_tab[i] == NULL)
		{
			perror("Erreur d'allocation de mémoire");
			exit(EXIT_FAILURE);
		}
		i++;
		map->dfs_tab[map->height] = (NULL);
	}
}

void	dfs_add_map(char *filename, t_map *map)
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
	while ((ret = read(fd, &c, 1)) > 0)
	{
		k = 0;
		while (c != '\n' && ret > 0)
		{
			map->dfs_tab[i][k] = c;
			k++;
			ret = read(fd, &c, 1);
		}
		map->dfs_tab[i][k] = '\0';
		i++;
	}
	close(fd);
}
