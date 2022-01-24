/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 16:18:49 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/23 17:09:37 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_charset(char c, char *charset);
char	*ft_malloc_str(char *str, char *charset);
char	**ft_split(char *str, char *charset);
int		ft_is_charset(char c, char *charset);

long long	ft_count_word(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && ft_is_charset(*str, charset))
			str++;
		if (*str && !ft_is_charset(*str, charset))
		{
			count++;
			while (*str && !ft_is_charset(*str, charset))
				str++;
		}
	}
	return (count);
}

char	*ft_malloc_str(char *str, char *charset)
{
	char	*ptr;
	int		k;

	while (*str && ft_is_charset(*(str), charset))
		str++;
	k = 0;
	while (str[k] && !ft_is_charset(str[k], charset))
		k++;
	ptr = (char *)malloc(sizeof(char) * (k + 1));
	k = 0;
	while (str[k] && !ft_is_charset(str[k], charset))
	{
		ptr[k] = str[k];
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}

int	ft_is_charset(char c, char *charset)
{
	while (*charset)
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

char	**ft_split(char *str, char *charset)
{
	char		**arr;
	long long	idx;

	arr = (char **)malloc(sizeof(char *) * ft_count_word(str, charset) + 1);
	idx = 0;
	while (*(str))
	{
		while (*(str) && ft_is_charset(*str, charset))
			str++;
		while (*(str) && !ft_is_charset(*str, charset))
		{
			arr[idx] = ft_malloc_str(str, charset);
			idx++;
			while (*str && !ft_is_charset(*str, charset))
				str++;
		}
	}
	arr[idx] = NULL;
	return (arr);
}
