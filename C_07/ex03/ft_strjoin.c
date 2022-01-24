/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 09:30:30 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/23 16:56:22 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strcat(char *ans, char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (ans[i])
		i++;
	while (str[j])
	{
		ans[i + j] = str[j];
		j++;
	}
	ans[i + j] = 0;
}

int	ft_len(char **strs, char *sep, int size)
{
	int	count;
	int	i;
	int	j;

	i = 0;
	count = 0;
	while (sep[i])
		i++;
	count = count + (i * (size - 1));
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			count = count + 1;
		}
		i++;
	}
	return (count + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		count;

	if (size == 0)
	{
		arr = malloc(sizeof(char));
		if (arr == NULL)
			return (NULL);
		arr[0] = 0;
		return (arr);
	}
	count = ft_len(strs, sep, size);
	arr = (char *)malloc(count * sizeof(char));
	if (arr == NULL)
		return (NULL);
	arr[0] = 0;
	count = 0;
	while (count < size - 1)
	{
		ft_strcat(arr, strs[count]);
		ft_strcat(arr, sep);
		count++;
	}
	ft_strcat(arr, strs[count]);
	return (arr);
}
