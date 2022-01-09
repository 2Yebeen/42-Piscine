/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 10:26:03 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/09 11:23:15 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	min;
	int	min_i;
	int	i;

	i = 0;
	while (i < size)
	{
		min_i = i;
		while (min_i < size)
		{
			if (tab[i] >= tab[min_i])
			{
				min = tab[min_i];
				tab[min_i] = tab[i];
				tab[i] = min;
			}
			min_i++;
		}
		i++;
	}
}
