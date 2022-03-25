/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:45:29 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/26 16:45:29 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_free_map(t_map *map, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		free(map->arr[i]);
		i++;
	}
	free(map->arr);
	free(map);
}

char	*ft_free_line(char *line)
{	
	free(line);
	return (0);
}
