/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 10:59:30 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/24 18:02:08 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_base_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_change(long nbr, char *base, int len)
{
	int	i;

	i = nbr % len;
	if (nbr / len != 0)
		ft_change(nbr / len, base, len);
	write(1, &base[i], 1);
}

int	ft_str_base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	nbrl;

	nbrl = nbr;
	len = ft_str_base_len(base);
	if (!ft_base_valid(base))
		return ;
	if (nbrl >= 0)
		ft_change(nbrl, base, len);
	else
	{
		write(1, "-", 1);
		ft_change(nbrl * -1, base, len);
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int from ;

	from = 
	return (nbr);
}