/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 19:05:47 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/17 20:38:16 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int	ft_atoi(char *str)
{
	int				i;
	int 			sign;
	long long int	num;

	i = 0;
	num = 0;
	sign = 1;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
		i++;
	while  (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		num *= 10;
		num += (str[i] - '0');
		i++;
	}
	return (num * sign);
}

int ft_base_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
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

void	ft_change(int nbr, char *base, int len)
{
	int	i;

	i = nbr % len;
	if (nbr / len != 0)
		ft_change(nbr / len, base, len);
	//write(1, &base[i], 1);
}

int	ft_base_len(char *str)
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

	len = ft_base_len(base);
	nbr = ft_atoi(str);
	if (!ft_base_valid(base))
		return (0);
	if (nbr > 0)
		ft_change(nbr, base, len);
	else if (nbr < 0)
	{
		write(1, "-", 1);
		ft_change(nbr * -1, base, len);
	}
	return (0);
}

int main()
{
	ft_atoi_base("10", "0123456789ABCDEF");
	//printf("%d", ft_atoi_base("123", "0123456789"));
	return (0);
}