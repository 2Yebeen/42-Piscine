/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:48:21 by yeblee            #+#    #+#             */
/*   Updated: 2022/03/14 16:51:51 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*arr;
	unsigned char	*value;
	size_t			i;

	*arr = *dst;
	*value = *src;
	i = 0;
	while (i <= len + 1)
	{
		*arr++ = *value++;
		i++;
	}
	return (dst);
}
