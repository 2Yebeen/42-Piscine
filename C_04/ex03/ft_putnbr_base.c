void ft_putnbr_base(int nbr, char *base)
{
	int base_len;
	int nbr_final[32];
	int cur;
	int nbrl;

	if (!check_base(base))
		return ;
	nbrl = nbr;
	cur = 0;
	base_len = ft_str_len(base);
	if(nbrl < 0)
	{
		nbrl -= nbrl;
		write(1, "-", 1);
	}
	while (nbrl != 0)
	{
		nbr_final[cul]=nbrl%base_len;
		nbrl = nbrl / base_len;
		cur++;
	}
	while (nbrl != 0)
	{
		nbr_final[cul] = nbrl % base_len;
		nbrl = nbrl / base_len;
		cur++;
	}
	while (--cur >= 0)
		write (1, &base[nbr_final[cul]], 1);
}

