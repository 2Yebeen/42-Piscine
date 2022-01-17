/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 21:01:03 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/10 17:21:10 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put(int nb)
{
	char	ans;

	ans = (nb % 10) + '0';
	if ((nb / 10) != 0)
	{
		ft_put(nb / 10);
	}
	write(1, &ans, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 0)
		ft_put(nb);
	else if (nb == 0)
		write(1, "0", 1);
	else if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		write(1, "-", 1);
		ft_put(nb * -1);
	}
}
