/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:45:44 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/26 16:45:44 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	bsq(char *file)
{
	t_map		*map;
	t_square	*square;

	if (file)
		map = ft_read_file(file);
	else
		map = ft_read_stdin();
	if (!map)
	{
		ft_error_msg(ERR_MSG);
		return ;
	}
	square = ft_find_bsq(map);
	if (!square->len)
		ft_error_msg(ERR_MSG);
	else
		ft_print(map, square);
	ft_free_map(map, map->y_len);
	free(square);
}

int	**make_arr(t_map *map)
{
	int		i;
	int		j;
	int		**buf;

	buf = (int **)malloc(sizeof(int *) * (map->y_len));
	if (!buf)
		exit(0);
	i = 0;
	while (i < map->y_len)
	{
		buf[i] = (int *)malloc(sizeof(int) * (map->x_len));
		if (!buf[i])
			exit(0);
		j = -1;
		while (++j < map->x_len)
		{
			if (map->arr[i][j] == map->obstacle)
				buf[i][j] = 0;
			else
				buf[i][j] = 1;
		}
		i++;
	}
	return (buf);
}
