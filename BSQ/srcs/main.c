/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:51:54 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/24 11:56:17 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	bsq(char *file);

int	main(int ac, char **av)
{
	int		i;

	i = 0;
	if (ac == 1)
		bsq(0);
	else
		while (i < ac)
			bsq(av[i++]);
	return (0);
}

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
		ft_map_error();
		return ;
	}
	square = ft_find_bsq(map);
	if (!square->len)
		ft_map_error();
	else
		ft_print(map, square);
	ft_free_map(map, map->y_len);
	free(square);
}
