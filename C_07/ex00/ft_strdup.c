/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 10:54:16 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/23 11:19:42 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_str_len(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*strdup;

	i = 0;
	size = ft_str_len(src);
	strdup = (char *)malloc(sizeof(char) * (size + 1));
	while (i < size)
	{
		strdup[i] = src[i];
		i++;
	}
	strdup[i] = '\0';
	if (!strdup)
		return (0);
	else
		return (strdup);
}
