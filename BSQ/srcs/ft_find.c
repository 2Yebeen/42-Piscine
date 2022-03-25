/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:45:31 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/26 16:45:31 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_square	*ft_find_bsq(t_map *map)
{
	int			i;
	int			**arr;
	t_square	*square;

	square = (t_square *)malloc(sizeof(t_square));
	if (!square)
		exit(0);
	arr = make_arr(map);
	ft_modify_square(square, -1, -1, 0);
	i = -1;
	while (++i < map->y_len)
		ft_find_bsq_sub(i, map, arr, square);
	i = 0;
	while (i < map->y_len)
		free(arr[i++]);
	free(arr);
	return (square);
}

void	ft_find_bsq_sub(int i, t_map *map, int **arr, t_square *square)
{
	int	j;
	int	len;

	j = -1;
	while (++j < map->x_len)
	{
		if (i == 0 || j == 0)
			if (square->len < arr[i][j])
				ft_modify_square(square, j, i, arr[i][j]);
		if (i == 0 || j == 0)
			continue ;
		if (arr[i][j] == 1)
		{
			len = ft_check_square(arr, i, j);
			if (square->len < len)
				ft_modify_square(square, j, i, len);
		}
	}
}
