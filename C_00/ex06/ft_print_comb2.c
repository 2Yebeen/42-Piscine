/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 21:54:21 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/09 17:50:25 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int a, int b)
{
	char	arr[8];

	arr[0] = a / 10 + '0';
	arr[1] = a % 10 + '0';
	arr[2] = ' ';
	arr[3] = b / 10 + '0';
	arr[4] = b % 10 + '0';
	arr[5] = ',';
	arr[6] = ' ';
	if (arr[0] == '9' && arr[1] == '8')
		write(1, arr, 5);
	else
		write(1, arr, 7);
}

void	ft_print_comb2(void)
{
	int	number[2];

	number[0] = 0;
	while (number[0] < 99)
	{
		number[1] = number[0] + 1;
		while (number[1] < 100)
		{
			ft_print(number[0], number[1]);
			number[1]++;
		}
		number[0]++;
	}
}
