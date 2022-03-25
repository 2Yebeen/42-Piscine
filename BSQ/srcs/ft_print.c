/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:45:21 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/26 16:45:21 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_is_printable(char c)
{
	if (32 < c && c <= 126)
		return (1);
	return (0);
}

void	ft_print(t_map *map, t_square *square)
{
	int		i;

	ft_modify_map(map, square);
	i = -1;
	while (++i < map->y_len)
	{
		write(1, map->arr[i], map->x_len);
		write(1, "\n", 1);
	}
}
