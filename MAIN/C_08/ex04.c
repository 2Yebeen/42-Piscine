/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 14:55:56 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/20 17:44:57 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"
#include <stdio.h>

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char **src, int j)
{
	int		i;
	int		size;
	char	*dest;

	i = 0;
	size = ft_str_len(src[j]);
	dest = (char *)malloc(sizeof(char) * (size + 1));
	while (i < size)
	{
		//printf("복사중 ... src[j][i]: %c\n", src[j][i]);
		dest[i] = src[j][i];
		//printf("복사끄읓 ... dest[i] %c\n", dest[i]);
		i++;
	}
	dest[i] = 0;
	free(dest);
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*arr;

	arr = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * (ac + 1));
	i = 0;
	if (!arr)
		return (0);
	while (av[i])
	{
		arr[i].size = ft_str_len(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av, i);
		printf("(%d), size : %d\tstr : %s\tcopy : %s 너의 주소는 %p\n", i, arr[i].size, arr[i].str, arr[i].copy, arr[i].copy);
		i++;
	}
	arr[i].str = 0;
	return (arr);
}

int	main(int ac, char **av)
{
	int					i;
	struct s_stock_str	*ans;

	ans = ft_strs_to_tab(ac, av);
	while (i < ac)
	{
		printf("(%d), size : %d\tstr : %s\tcopy : %s 너의 주소는 %p\n", i, ans[i].size, ans[i].str, ans[i].copy, ans[i].copy);
		i++;
	}
	return (0);
}
