#include "bsq.h"


int		ft_parse_map_info(t_map *map, char *info)
{
	int ret;

	ret = ft_parse_map_info_sub(map, info);
	if (!ret)
		free(map);
	free(info);
	return (ret);
}


char	*ft_read_line(int fd)
{
	char	*line;
	char	c;
	int		idx;
	int		size;

	idx = 0;
	size = 2;
	if (!(line = (char*)malloc(size)))
		exit(0);
	while (ft_read(fd, &c, 1))
	{
		if (c == '\n')
		{
			line[idx] = 0;
			break ;
		}
		if (idx + 1 == size)
			line = ft_expand_size(line, &size);
		line[idx++] = c;
	}
	if (idx == 0)
		return (ft_free_line(line));
	return (line);
}

t_map	*ft_read_map(int fd, int stdin)
{
	char	*line;
	int		idx;
	t_map	*map;

	stdin = 0;
	if (!(map = (t_map*)malloc(sizeof(t_map))))
		exit(0);
	if (!ft_parse_map_info(map, ft_read_line(fd)))
		return (0);
	if (!(map->arr = (char**)malloc(sizeof(char*) * map->y_len)))
		exit(0);
	idx = 0;
	map->x_len = 0;
	while ((line = ft_read_line(fd)))
		if (!ft_read_map_sub(&idx, map, line))
			return (0);
	if (idx != map->y_len)
	{
		ft_free_map(map, idx);
		return (0);
	}
	return (map);
}

t_map	*ft_read_stdin(void)
{
	return (ft_read_map(0, 1));
}

t_map	*ft_read_file(char *file)
{
	int fd;

	if ((fd = open(file, O_RDONLY)) == -1)
		return (0);
	return (ft_read_map(fd, 0));
}