/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmpend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:38:15 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/15 12:38:15 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/so_long.h"

static int	checksrc(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	if (i != 4)
		return (0);
	return (1);
}

int	ft_strcmpend(char *str, char *src)
{
	int	i;
	int	j;

	if (!checksrc(src))
		return (0);
	i = 0;
	j = 0;
	while (str[i])
		i++;
	i -= 4;
	while (str[i])
	{
		if (str[i] != src[j])
			return (0);
		i++;
		j++;
	}
	return (1);
}
