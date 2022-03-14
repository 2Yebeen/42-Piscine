/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:51:59 by yeblee            #+#    #+#             */
/*   Updated: 2022/03/14 16:59:43 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst,
				  const char *restrict src, size_t destsize)
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		i++;
	}
	return (i);
}
