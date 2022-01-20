/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 13:02:20 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/12 13:33:28 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	if (!to_find)
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[0])
		{
			while (1)
			{
				if (to_find[j] == '\0')
					return (&str[i]);
				else if (!(str[i + j] == to_find[j]))
					break;
				j++;
			}
		}
		i++;
	}
	return (0);
}

int main()
{
	printf("%s\n", ft_strstr("abcdeefghijkl", ""));
	printf("%s\n", strstr("abcdeefghijkl",""));
	return (0);
}
