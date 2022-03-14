/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:59:54 by yeblee            #+#    #+#             */
/*   Updated: 2022/03/14 17:04:07 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int	d;
	int	s;

	d = 0;
	s = 0;
	while (dst[d] != 0)
	{
		d++;
	}
	while (src[s] != 0)
	{
		s++;
	}
	return (d + s);
}
