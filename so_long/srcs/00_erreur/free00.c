/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:46:35 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/15 16:46:35 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	liberer_str_tab(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		liberer_str(str[i]);
		i++;
	}
	free(str);
}
