/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erreur01.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:29:52 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/19 16:47:15 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	errormapcall(void (*f)(), t_map *map)
{
	f();
	free_map(map);
	exit(EXIT_FAILURE);
}

void	errormapcontent(void)
{
	ft_putendl_fd("\n", 1);
	ft_putendl_fd("Erreur", 1);
	ft_putendl_fd("\n", 1);
	ft_putendl_fd("Probleme dans le contenue de la map", 1);
	ft_putendl_fd("\n", 1);
}

void	errormapplayer(void)
{
	ft_putendl_fd("\n", 1);
	ft_putendl_fd("Erreur", 1);
	ft_putendl_fd("\n", 1);
	ft_putendl_fd("La map ne contient pas un seul PLAYER", 1);
	ft_putendl_fd("\n", 1);
}

void	errormapexit(void)
{
	ft_putendl_fd("\n", 1);
	ft_putendl_fd("Erreur", 1);
	ft_putendl_fd("\n", 1);
	ft_putendl_fd("La map ne contient pas une seule EXIT", 1);
	ft_putendl_fd("\n", 1);
}

void	errormapempty(void)
{
	ft_putendl_fd("\n", 1);
	ft_putendl_fd("Erreur", 1);
	ft_putendl_fd("\n", 1);
	ft_putendl_fd("La map est vide", 1);
	ft_putendl_fd("\n", 1);
}
