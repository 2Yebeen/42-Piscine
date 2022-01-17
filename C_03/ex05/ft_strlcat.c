/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:21:51 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/13 10:01:06 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_str_length(char *str)
{
	unsigned int	i;

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

	i = 0;
	len_dest = ft_str_length(dest);
	len_src = ft_str_length(src);
	while ((len_dest + i + 1) < size && src[i] != '\0')
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	if (size < len_dest)
		return (len_src + size);
	else
		return (len_dest + len_src);
}
