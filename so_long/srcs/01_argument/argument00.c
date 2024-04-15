/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument00.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:15:34 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/15 14:15:34 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	main_argument(int ac, char **av)
{
	if (!argument_erreur(ac, av))
		return (0);
	if (!argument_parsing(av[1]))
		return (0);
	return (1);
}