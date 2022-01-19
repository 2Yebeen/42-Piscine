/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 17:05:11 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/18 20:58:07 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{	
		j = 0;
		while (av[i][j])
			j++;
		write(1, av[i], j);
		write(1, "\n", 1);
		i++;
	}
}

void	ft_swap(char **av, int i, int j)
{
	char	*temp;

	temp = av[i];
	av[i] = av[j];
	av[j] = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i] && ac >= 3)
	{
		j = i + 1;
		while (av[j])
		{
			if (ft_strcmp(av[i], av[j]) > 0)
			{
				ft_swap(av, i, j);
			}
			j++;
		}
		i++;
	}
	ft_print(av);
	return (0);
}
