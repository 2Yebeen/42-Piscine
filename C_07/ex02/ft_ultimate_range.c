/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 14:36:38 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/20 19:48:56 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*num;

	i = 0;
	if (min >= max)
		return (0);
	num = (int *)malloc(sizeof(int) * min - max);
	while (num[i])
	{
		num[i] = min + i;
		range[0][i] = num[i];
		i++;
	}
	*range = num;
	return (i);
}
