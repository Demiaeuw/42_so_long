/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window02.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:49:42 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/20 12:08:18 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	printstartgame(void)
{
	ft_printf("\n\n\nBienvenue sur mon jeux\n\n");
	ft_printf("Inspiré de la série de jeux :\n\n");
	ft_printf("  _    _          _      ____  \n");
	ft_printf(" | |  | |   /\\   | |    / __ \\ \n");
	ft_printf(" | |__| |  /  \\  | |   | |  | |\n");
	ft_printf(" |  __  | / /\\ \\ | |   | |  | |\n");
	ft_printf(" | |  | |/ ____ \\| |___| |__| |\n");
	ft_printf(" |_|  |_/_/    \\_\\______\\____/ \n");
	ft_printf("\n\n");
}

void	printnbpas(t_so_long **game)
{
	ft_printf("Nombre de pas : %d\n", (*game)->nb_pas);
}

int	close_echap(int keycode, t_so_long *game)
{
	if (keycode == KEY_ESC)
	{
		printendgameechec();
		main_free(&game);
		exit(0);
	}
	return (0);
}

void	printendgamevalid(t_so_long **game)
{
	ft_printf("\n\n");
	ft_printf("Vous avez fini le niveau en : %d mouvments\n",
		(*game)->nb_pas);
	ft_printf("\n\n");
	ft_printf("Merci D'avoir joué !\n\n");
}

void	printendgameechec(void)
{
	ft_printf("\n\n");
	ft_printf("Merci D'avoir joué !\n\n");	
}