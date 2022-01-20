/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:21:51 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/12 16:40:10 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_dest;
	unsigned int	len_src;

	len_dest = (unsigned int)ft_str_length(dest);
	len_src = (unsigned int)ft_str_length(src);
	i = 0;
	if (len_dest >= size)
		return (len_dest + len_src);
	while (i < size - 1 && src[i] != '\0')
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len_dest + len_src);
}

int	main()
{
	char dest[30] = "123";
	char *src = "456789";
	unsigned int ans;

	ans = ft_strlcat(dest, src, 1);
	printf("%d", ans);
	return (0);
}
