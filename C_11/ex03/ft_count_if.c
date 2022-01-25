int		ft_count_if(char **tab, int lenght, int (*f)(char*))
{
	int		i;
	int		n;

	i = -1;
	n = 0;
	while (++i < lenght)
		if ((*f)(tab[i]) != 0)
			n++;
	return (n);
}
