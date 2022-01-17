/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 19:56:48 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/16 13:01:47 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	negative;

	i = 0;
	num = 0;
	negative = 1;
	while (str[i] && (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r' || str[i] == ' '))
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			negative *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		num *= 10;
		num += (str[i] - '0');
		i++;
	}
	return (num * negative);
}

int	ft_base_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[i] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_recursive(int nbr, char *base, int len)
{
	int	i;

	i = nbr % len;
	if (nbr / len != 0)
		ft_recursive(nbr / len, base, len);
	write(1, &base[i], 1);
}

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	len;
	int	nbr;

	len = ft_str_len(str);
	nbr = ft_atoi(str);
	if (!ft_base_valid(base))
		return (0);
	if (nbr > 0)
		ft_recursive(nbr, base, len);
	else
	{
		write(1, "-", 1);
		ft_recursive(nbr * -1, base, len);
	}
	return (0);
}
