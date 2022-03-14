/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft__memcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:32:35 by yeblee            #+#    #+#             */
/*   Updated: 2022/03/14 16:48:04 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	void	*restrict	dest;
	void	*restrict	s;
	size_t				i;

	*dest = *dst;
	*s = *src;
	i = 0;
	while (i <= n + 1)
	{
		*dest++ = *s++;
		i++;
	}
	return (dst);
}
