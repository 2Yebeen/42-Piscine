/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:50:01 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/24 18:02:15 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_check_charset(char c, char *charset)
{
	while (*charset != 0)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_get_word_count(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str != 0)
	{
		if (ft_check_charset(*str, charset) == 0)
		{
			count++;
			while (ft_check_charset(*str, charset) == 0 && *str != 0)
				str++;
		}
		str++;
	}
	return (count);
}

void	ft_strcpy(char *dest, char *temp, char *str)
{
	while (temp < str)
		*dest++ = *temp++;
	*dest = '\0';
}

char	**ft_split(char *str, char *charset)
{
	int		w_len;
	int		i;
	char	**result;
	char	*temp;

	i = 0;
	w_len = ft_get_word_count(str, charset);
	result = (char **)malloc(sizeof(char *) * (w_len + 1));
	while (*str != 0)
	{
		if (ft_check_charset(*str, charset) == 0)
		{
			temp = str;
			while (*str != 0 && ft_ft_check_charset(*str, charset) == 0)
				str++;
			result[i] = (char *)malloc(str - temp + 1);
			ft_strcpy(result[i], temp, str);
			i++;
		}
		str++;
	}
	result[i] = 0;
	return (result);
}
