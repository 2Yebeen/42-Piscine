/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:21:51 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/12 18:53:55 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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
	if (len_dest > size)
		return (len_src + size);
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

	ans = ft_strlcat(dest, src, 15);
	printf("1(1) : %d\n", ans);
	printf("%ld\n", sizeof(dest));
	//printf("2(1) : %ld\n", strlcat(dest, src, 1));
	//printf("3(3) : %ld\n", strlcat(dest, src, 3));
	//printf("4(7) : %ld\n", strlcat(dest, src, 7));
	//printf("5(15) : %ld\n", strlcat(dest, src, 15));
	//printf("6() : %ld\n", strlcat(dest, src, 5));
	return (0);
}
