#include <unistd.h>

void ft_atoi(int nb)
{
	char num;

	num = (nb / 10) + '0';
	if((nb/10) != 0)
		ft_atoi(nb/10);
	write(1, &num, 1);
}


void ft_putnbr(int nb)
{
	if (nb > 0)
		ft_atoi(nb);
	else if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
		write (1, "-", 1);
		ft_atoi(nb * -1);
}

int	main()
{
	int a;

	a = 42;
	ft_putnbr(a);
	return (0);
}
