/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 19:49:24 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/16 11:06:00 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	base_valid(char *base)
{
	int		i;
	int		k;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		k = i + 1;
		while (base[k] != '\0')
		{
			if (base[i] == base[k])
				return (0);
			k++;
		}
		i++;
	}
	return (1);
}

void	ft_recursive(int n, char *base, int len)
{
	int	i;

	i = n % len;
	if (n / len != 0)
	{
		ft_recursive(n / len, base, len);
	}
	write(1, &base[i], 1);
}

int	check_length(char *a)
{
	int	i;

	i = 0;
	while (a[i] != '\0')
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	if (!base_valid(base))
		return ;
	len = check_length(base);
	if (nbr >= 0)
		ft_recursive(nbr, base, len);
	else
	{
		write(1, "-", 1);
		ft_recursive(nbr * -1, base, len);
	}
}
