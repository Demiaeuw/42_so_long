/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erreur03.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:53:03 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/19 16:10:14 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	errormlxcall(void (*f)(), t_so_long *game)
{
	f();
	main_free(&game);
	exit(EXIT_FAILURE);
}

void	errormlxspriteplayer(void)
{
	ft_putendl_fd("\n", 1);
	ft_putendl_fd("Erreur", 1);
	ft_putendl_fd("\n", 1);
	ft_putendl_fd("Probleme de chargement du sprite PLAYER", 1);
	ft_putendl_fd("\n", 1);
}

void	errormlxspriteexitclosed(void)
{
	ft_putendl_fd("\n", 1);
	ft_putendl_fd("Erreur", 1);
	ft_putendl_fd("\n", 1);
	ft_putendl_fd("Probleme de chargement du sprite EXIT_CLOSED", 1);
	ft_putendl_fd("\n", 1);
}

void	errormlxspriteexitopen(void)
{
	ft_putendl_fd("\n", 1);
	ft_putendl_fd("Erreur", 1);
	ft_putendl_fd("\n", 1);
	ft_putendl_fd("Probleme de chargement du sprite EXIT_OPEN", 1);
	ft_putendl_fd("\n", 1);
}

void	errormlxspritewall(void)
{
	ft_putendl_fd("\n", 1);
	ft_putendl_fd("Erreur", 1);
	ft_putendl_fd("\n", 1);
	ft_putendl_fd("Probleme de chargement du sprite WALL", 1);
	ft_putendl_fd("\n", 1);
}
