/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:04:12 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/19 19:44:53 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		g_count = 0;
char	g_puzzle[11] = {0, };

int	ft_is_promising(int r)
{
	int	i;

	i = 0;
	while (i < r)
	{
		if (g_puzzle[i] == g_puzzle[r])
			return (0);
		if (g_puzzle[i] - g_puzzle[r] == i - r
			|| g_puzzle[i] - g_puzzle[r] == r - i)
			return (0);
		i++;
	}
	return (1);
}

void	ft_solve(int r)
{
	int	c;

	c = 0;
	if (r == 10)
	{
		write(1, g_puzzle, 10);
		write(1, "\n", 1);
		g_count++;
		return ;
	}
	while (c < 10)
	{
		g_puzzle[r] = c + '0';
		if (ft_is_promising(r))
			ft_solve(r + 1);
		c++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	ft_solve(0);
	return (g_count);
}
