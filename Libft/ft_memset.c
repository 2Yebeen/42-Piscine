/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:56:59 by yeblee            #+#    #+#             */
/*   Updated: 2022/03/14 16:41:32 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*arr;
	unsigned char	value;
	size_t			i;

	arr = b;
	value = c;
	i = 0;
	while (i <= len)
	{
		*arr = value;
		*arr++;
	}
	return (arr);
}
