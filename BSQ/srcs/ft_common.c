/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_common.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 11:08:35 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/24 14:48:10 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_find_min(int a, int b, int c)
{
	int	min;

	min = a;
	if (min > b)
		min = b;
	if (min > c)
		min = c;
	return (min);
}

int	ft_intcmp(int a, int b)
{
	if (a < b)
		return (1);
	return (0);
}

void	ft_print(t_map *map, t_square *square)
{
	int		i;

	ft_modify_map(map, square);
	i = 0;
	while (i < map->y_len)
	{
		write(1, map->arr[i++], map->x_len);
		ft_putchar('\n');
	}
}

int		ft_is_number(char c)
{
	return ('0' <= c && c <= '9');
}


int		ft_atoi(char *str)
{
	int num;

	if (*str == '0')
		return (0);
	num = 0;
	while (*str)
	{
		if (!ft_is_number(*str))
			return (0);
		num *= 10;
		num += (*str - '0');
		++str;
	}
	return (num);
}