/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanbpar <chanbpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 15:49:38 by chanbpar          #+#    #+#             */
/*   Updated: 2022/01/08 15:49:39 by chanbpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int c, int r)
{
	int	row;
	int	col;

	row = 1;
	while (row <= r && c >= 1)
	{
		col = 1;
		while (col <= c)
		{
			if ((row == 1 && col == 1) || ((row == 1) && (col == c)))
				ft_putchar('A');
			else if ((row == r && col == c) || (row == r && col == 1))
				ft_putchar('C');
			else if ((row == 1 || row == r) || (col == c || col == 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
