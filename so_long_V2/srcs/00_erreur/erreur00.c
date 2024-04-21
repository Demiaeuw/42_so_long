/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erreur00.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:05:26 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/12 15:05:26 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	errorargc(void)
{
	ft_putendl_fd("\n", 1);
	ft_putendl_fd("Erreur", 1);
	ft_putendl_fd("\n", 1);
	ft_putendl_fd("Veuillez a n'entrée que l'executable + nom de map", 1);
	ft_putendl_fd("./so_long 'nom de map'", 1);
	ft_putendl_fd("\n", 1);
	return ;
}

void	errorber(void)
{
	ft_putendl_fd("\n", 1);
	ft_putendl_fd("Erreur", 1);
	ft_putendl_fd("\n", 1);
	ft_putendl_fd("Ce n'est pas un fichier.ber", 1);
	ft_putendl_fd("./so_long maps/nom_du_fichier.ber", 1);
	ft_putendl_fd("\n", 1);
	return ;
}

void	errorfileexist(void)
{
	ft_putendl_fd("\n", 1);
	ft_putendl_fd("Erreur", 1);
	ft_putendl_fd("\n", 1);
	ft_putendl_fd("Ce fichier n'existe pas", 1);
	ft_putendl_fd("./so_long maps/nom_du_fichier.ber", 1);
	ft_putendl_fd("\n", 1);
	return ;
}
