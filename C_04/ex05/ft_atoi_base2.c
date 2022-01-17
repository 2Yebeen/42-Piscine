int	ft_base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	ft_is_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != c)
		i++;
	if (!base[i])
		return (0);
	else
		return (1);
}

int	ft_get_base(char c, char *base)
{
	int	i;
	
	i = 0;
	while (base[i])
	{
		if(base[i] == c)
			return (1);
		i++;
	}
	return (1);
}

int	ft_base_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_base_len(base) < 2)
		return (0);
	while (base[i])
	{
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == ' ' 
			|| base[i] == '-' || base[i] == '+')
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
int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	len;
	int	nbr;
	int	sign;
	int	tail;

	i = 0;
	nbr = 0;
	sign = 1;
	len = ft_base_len(base);
	if (!ft_base_valid(base))
		return (0)
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		sign *= str[i] == '-' ? -1 : 1;
		i++;
	}
	tail = ft_is_in_base(str[i], base);
	return (nbr * sign);
}
