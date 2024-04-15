/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map03.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 22:46:32 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/15 22:46:32 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	check_collectible(t_map *map)
{
	int	i;
	int	j;
	int	count_c;


	count_c = 0;
	i = 0;
	while (map->tab[i])
	{
		j = 0;
		while (map->tab[i][j])
		{
			if (map->tab[i][j] == COLLECT)
				count_c++;
			j++;
		}
		i++;
	}
	if (count_c < 1)
		errormapcall(errormapcollect, map);
	return ;
}
