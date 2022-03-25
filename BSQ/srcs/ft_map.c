/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:45:26 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/26 16:45:26 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_parse_map_info(t_map *map, char *info)
{
	int	ret;

	ret = ft_parse_map_info_sub(map, info);
	if (!ret)
		free(map);
	free(info);
	return (ret);
}

int	ft_parse_map_info_sub(t_map *map, char *info)
{
	int	len;

	len = ft_strlen(info);
	if (!info || (len < 4))
		return (0);
	map->full = info[len - 1];
	map->obstacle = info[len - 2];
	map->empty = info[len - 3];
	if (map->empty == map->obstacle
		|| map->empty == map->full
		|| map->obstacle == map->full
		|| !ft_is_valid_map_info(map))
		return (0);
	info[len - 3] = 0;
	map->y_len = ft_atoi(info);
	if (!(map->y_len))
		return (0);
	return (1);
}

int	ft_is_valid_map(char *line, t_map *map)
{
	while (*line)
	{
		if (*line != map->empty && *line != map->obstacle)
			return (0);
		line++;
	}
	return (1);
}

int	ft_is_valid_map_info(t_map *map)
{
	int	full;
	int	obst;
	int	empt;
	int	result;

	full = ft_is_printable(map->full);
	obst = ft_is_printable(map->obstacle);
	empt = ft_is_printable(map->empty);
	result = full && obst && empt;
	return (result);
}

int	ft_is_duplicate(char a, char b, char c)
{
	if (a == b || b == c || c == a)
		return (1);
	return (0);
}
