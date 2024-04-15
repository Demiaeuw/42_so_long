/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:12:13 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/15 17:12:13 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	errormaptaille(void)
{
	ft_putendl_fd("\n", 1);
	ft_putendl_fd("Erreur", 1);
	ft_putendl_fd("\n", 1);
	ft_putendl_fd("Probleme de taille de map", 1);
	ft_putendl_fd("\n", 1);
}

void	errormaprectangle(void)
{
	ft_putendl_fd("\n", 1);
	ft_putendl_fd("Erreur", 1);
	ft_putendl_fd("\n", 1);
	ft_putendl_fd("La map n'est pas rectangulaire", 1);
	ft_putendl_fd("\n", 1);
}

void	errormapwall(void)
{
	ft_putendl_fd("\n", 1);
	ft_putendl_fd("Erreur", 1);
	ft_putendl_fd("\n", 1);
	ft_putendl_fd("La map n'est pas entouré de mur", 1);
	ft_putendl_fd("\n", 1);
}

void	errormapcollect(void)
{
	ft_putendl_fd("\n", 1);
	ft_putendl_fd("Erreur", 1);
	ft_putendl_fd("\n", 1);
	ft_putendl_fd("La map ne contient pas suffisament de COLLECT", 1);
	ft_putendl_fd("\n", 1);
}
