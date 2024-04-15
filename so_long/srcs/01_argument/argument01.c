/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_00.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:09:20 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/12 15:09:20 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	argument_erreur(int ac, char **av)
{
	if (ac != 2)
	{
		errorargc();
		return (0);
	}
	if (!check_ber(ac, av))
		return (0);
	if (!check_file_exist(av[1]))
		return (0);
	return (1);
}

int	check_ber(int ac, char **av)
{
	(void)ac;
	if (!ft_strcmpend(av[1], ".ber"))
	{
		errorber();
		return (0);
	}
	return (1);
}

int	check_file_exist(char *filename)
{
	int	fd;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		errorfileexist();
		return (0);
	}
	close(fd);
	return (1);
}
