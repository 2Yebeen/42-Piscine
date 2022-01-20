/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:16:35 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/19 14:34:59 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*num;

	i = 0;
	if (min >= max)
		return (0);
	num = (int *)malloc(sizeof(int) * max - min);
	while (i + min < max)
	{
		num[i] = min + i;
		i++;
	}
	return (num);
}
