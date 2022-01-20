/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 09:34:56 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/20 08:40:30 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_print(int size, char **str)
{
	int	i;
	int	len;

	i = size - 1;
	while (i > 0)
	{
		len = ft_str_len(str[i]);
		write(1, str[i], len);
		write(1, "\n", 1);
		i--;
	}
}

int	main(int ac, char **av)
{
	ft_print(ac, av);
	return (0);
}
