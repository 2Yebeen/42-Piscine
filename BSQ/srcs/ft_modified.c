/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_modified.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:45:24 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/26 16:45:24 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_check_square(int **arr, int i, int j)
{
	int	min;

	min = ft_min(arr[i - 1][j], arr[i - 1][j - 1], arr[i][j - 1]);
	arr[i][j] = min + 1;
	return (min + 1);
}

void	ft_modify_square(t_square *square, int x, int y, int len)
{
	square->x = x;
	square->y = y;
	square->len = len;
}

void	ft_modify_map(t_map *map, t_square *square)
{
	int		i;
	int		j;
	char	full;

	full = map->full;
	i = square->y - square->len;
	while (++i <= square->y)
	{
		j = square->x - square->len;
		while (++j <= square->x)
			map->arr[i][j] = full;
	}
}

char	*ft_expand_size(char *src, int *size)
{
	char	*ret;

	ret = (char *)malloc(*size << 1);
	if (!ret)
		exit(0);
	ft_strncpy(ret, src, *size);
	*size <<= 1;
	free(src);
	return (ret);
}
