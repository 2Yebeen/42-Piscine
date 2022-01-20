/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 14:36:38 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/20 09:10:27 by yeblee           ###   ########.fr       */
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

int	main()
{
	int	**range;
	ft_ultimate_range(range, 0, 15);
}