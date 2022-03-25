/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:45:18 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/27 11:01:57 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*ft_read_line(int fd, char *temp, int *size, int cnt)
{
	char	*line;
	char	c;
	int		idx;

	idx = -1;
	while (read(fd, &c, 1))
	{
		if (c == '\n')
		{
			temp[idx] = 0;
			break ;
		}
		if (cnt + 1 == *size)
			temp = ft_expand_size(temp, size);
		temp[cnt++] = c;
	}
	if (cnt == 0)
		return (ft_free_line(temp));
	line = (char *)malloc(cnt);
	if (!line)
		exit(0);
	while (++idx < cnt)
		line[idx] = temp[idx];
	return (line);
}

t_map	*ft_read_map(int fd, t_map	*map, int *size, int cnt)
{
	char	*line;
	char	*temp;
	int		idx;

	temp = (char *)malloc(sizeof(char) * *size);
	if (!temp || !ft_parse_map_info(map, ft_read_line(fd, temp, size, cnt)))
		return (0);
	map->arr = (char **)malloc(sizeof(char *) * map->y_len);
	idx = 0;
	map->x_len = 0;
	while (1)
	{
		line = ft_read_line(fd, temp, size, cnt);
		if (!line)
			break ;
		if (!ft_read_map_sub(&idx, map, line))
			return (0);
	}
	if (idx != map->y_len)
	{
		ft_free_map(map, idx);
		return (0);
	}
	return (map);
}

int	ft_read_map_sub(int *idx, t_map *map, char *line)
{
	int	len;

	if (*idx == map->y_len || !ft_is_valid_map(line, map))
	{
		free(line);
		ft_free_map(map, *idx);
		return (0);
	}
	len = ft_strlen(line);
	if (map->x_len == 0)
		map->x_len = len;
	if (len != map->x_len)
	{
		free(line);
		ft_free_map(map, *idx);
		return (0);
	}
	map->arr[(*idx)++] = line;
	return (1);
}

t_map	*ft_read_stdin(void)
{
	t_map	*map;
	int		size;
	int		cnt;

	size = 100000000;
	cnt = 0;
	map = (t_map *)malloc(sizeof(t_map));
	return (ft_read_map(0, map, &size, cnt));
}

t_map	*ft_read_file(char *file)
{
	int		fd;
	t_map	*map;
	int		size;
	int		cnt;

	size = 100000000;
	cnt = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (0);
	map = (t_map *)malloc(sizeof(t_map));
	if (!map)
		exit(0);
	return (ft_read_map(fd, map, &size, cnt));
}
