/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:19:37 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/22 20:44:15 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *ans, char *str)
{
	int	i;
	int	idx;

	i = 0;
	idx = ft_str_len(ans);
	printf("idx : %d", idx);
	while (str[i])
	{
		ans[idx] = str[i];
		idx++;
		i++;
	}
	ans[idx] = 0;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*ans;

	i = 0;
	while (strs[i])
	{
		len += ft_str_len(strs[i]);
		i++;
	}
	len = (len * size - 1) + 1;
	ans = (char *)malloc(sizeof(char) * len);
	i = 0;
	ans[0] = 0;
	while (strs[i])
	{
		ft_putstr(ans, strs[i]);
		if (i < size)
		{
			ft_putstr(ans, sep);
		}
		i++;
	}
	return (ans);
}