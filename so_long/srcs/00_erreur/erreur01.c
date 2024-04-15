/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erreur01.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:29:52 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/15 14:29:52 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

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
	ft_putendl_fd("La map contient plusieurs playeur ou 0", 1);
	ft_putendl_fd("\n", 1);
}

void	errormapexit(void)
{
	ft_putendl_fd("\n", 1);
	ft_putendl_fd("Erreur", 1);
	ft_putendl_fd("\n", 1);
	ft_putendl_fd("La map contient plusieurs exit ou 0", 1);
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
