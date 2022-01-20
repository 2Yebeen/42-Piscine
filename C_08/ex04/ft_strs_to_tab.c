/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 14:55:56 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/20 19:37:30 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*dest;

	i = 0;
	size = ft_str_len(src);
	dest = (char *)malloc(sizeof(char) * (size + 1));
	while (i < size)
	{
		dest[i] = src[i];
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
		arr[i].copy = ft_strdup(av[i]);
		i++;
	}
	arr[i].str = 0;
	return (arr);
}
