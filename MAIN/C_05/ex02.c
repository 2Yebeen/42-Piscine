#include <stdio.h>

int ft_iterative_power(int nb, int power);

int	main()
{
	int i;
	int power;

	i = 5;
	power = 2;
	printf("ex02 ) %d**%d =  %d\n", i, power, ft_iterative_power(i, power));
	return (0);
}
