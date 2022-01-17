<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}

int main ()
{
	int a;
	
	a = ft_strncmp("1234", "2345", 0);
	printf("1:%d\n", a);
	a = ft_strncmp("1234", "1256", 3);
	printf("2:%d\n", a);
	a = ft_strncmp("4578", "4512", 3);
	printf("3:%d\n", a);
	printf("strcmp1 : %d\n", strncmp("1234", "2345", 0));
	printf("strcmp2 : %d\n", strncmp("1234", "1234", 4));
	printf("strcmp3 : %d\n", strncmp("1734", "2345", 4));
	printf("strcmp4 : %d\n", strncmp("2789", "2345", 4));
	printf("strcmp5 : %d\n", strncmp("7089", "2345", 4));
	return (0);
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 14:44:58 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/17 14:50:05 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
>>>>>>> d985a974f9c757093eac1a5ced533fc879ccb636
}
