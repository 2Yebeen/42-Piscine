/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 20:27:41 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/16 13:03:49 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	negative;

	i = 0;
	num = 0;
	negative = 0;
	while (str[i] && (str[i] < '0' || str[i] > '9'))
	{
		if (str[i] == '-')
			negative *= -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		num *= 10;
		num += (str[i] - '0');
		i++;
	}
	return (num * negative);
}

int	main(int ac, char **av)
{
	int	ans;

	if (ac == 2)
	{
		ans = ft_atoi(av[1]);
		printf("%d\n", ans);
	}
	return (0);
}
