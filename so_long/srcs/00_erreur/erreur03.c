/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erreur03.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:53:03 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/19 14:32:06 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	errormlxcall(void (*f)(), t_so_long *game)
{
	f();
	main_free(&game);
	exit(EXIT_FAILURE);
}

void	errormlxsprite(void)
{
	ft_putendl_fd("\n", 1);
	ft_putendl_fd("Erreur", 1);
	ft_putendl_fd("\n", 1);
	ft_putendl_fd("Probleme de chargement de SPRITE", 1);
	ft_putendl_fd("\n", 1);
}
