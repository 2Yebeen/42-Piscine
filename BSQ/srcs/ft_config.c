#include "bsq.h"

int		ft_is_valid_map(char *line, t_map *map)
{
	while (*line)
	{
		if (*line != map->empty && *line != map->obstacle)
			return (0);
		++line;
	}
	return (1);
}

char	*ft_expand_size(char *src, int *size)
{
	char *ret;

	if (!(ret = (char*)malloc(*size << 1)))
		exit(0);
	ft_strncpy(ret, src, *size);
	*size <<= 1;
	free(src);
	return (ret);
}


void	ft_modify_map(t_map *map, t_square *square)
{
	int		i;
	int		j;
	char	full;

	full = map->full;
	i = square->y - square->len;
	while (i++ <= square->y)
	{
		j = square->x - square->len;
		while (j++ <= square->x)
			map->arr[i][j] = full;
	}
}

void	ft_free_map(t_map *map, int size)
{
	int	i;

	i = 0;
	while (i < size)
		free(map->arr[i++]);
	free(map->arr);
	free(map);
}
