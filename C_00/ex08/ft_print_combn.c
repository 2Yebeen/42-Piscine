/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 08:42:46 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/10 17:21:39 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char *number, int size)
{
	int		temp;
	char	a[2];

	temp = 10 - size;
	a[0] = ',';
	a[1] = ' ';
	write(1, number, size);
	if (!(number[0] == (temp + '0') && number[size - 1] == '9'))
		write(1, a, 2);
}

void	roop(int index, char *arr, int size)
{
	int	i;

	if (index == size)
		print(arr, size);
	else
	{
		if (index == 0)
			i = 0;
		else
			i = arr[index - 1] - '0' + 1;
		while (i < 10)
		{
			arr[index] = '0' + i;
			roop(index + 1, arr, size);
			i++;
		}
	}
}

void	ft_print_combn(int n)
{
	char	arr[10];

	roop(0, arr, n);
}
