/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 14:36:38 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/22 14:57:42 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*num;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	num = (int *)malloc(sizeof(int) * (max - min));
	while (num[i])
	{
		num[i] = min + i;
		i++;
	}
	*range = num;
	return (i);
}
