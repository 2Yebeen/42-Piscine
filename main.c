/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanbpar <chanbpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 15:49:19 by chanbpar          #+#    #+#             */
/*   Updated: 2022/01/08 15:49:20 by chanbpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define INT_MAX 2147483647

int		atoi(char *av);
void	rush(int col, int row);

int	main(int ac, char **av)
{
	int	col;
	int	row;

	if (ac < 3 || ac > 3)
		return (0);
	col = atoi(av[1]);
	row = atoi(av[2]);
	if (col > INT_MAX || row > INT_MAX)
		return (0);
	rush (col, row);
	return (0);
}

int	atoi(char *av)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	if (av[i] == '+')
		i++;
	while (av[i] != '\0')
	{
		if (av[i] >= '0' && av[i] <= '9')
		{
			num *= 10;
			num += av[i] - '0';
			i++;
		}
		else
			return (0);
	}
	return (num);
}
