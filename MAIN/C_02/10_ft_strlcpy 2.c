/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 21:29:15 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/11 18:24:09 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	write(1, dest, i);
	while (src[i] != '\0')
		i++;
	write(1, "\n", 1);
	write(1, src, i);
	return (i);
}

int main()
{
	unsigned int	a = 7;
	char	dest[10];
	char	*src="asdfzxcv";
	int ans;
	ans = ft_strlcpy(dest, src, a);
	printf("\t%d \n", ans);
	return (0);
}

