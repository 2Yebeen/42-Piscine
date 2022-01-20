#include <stdio.h>

int ft_recursive_power(int nb, int power);

int	main()
{
	int i;
	int power;

	i = 5;
	power = 2;
	printf("ex03 ) %d**%d =  %d\n", i, power, ft_recursive_power(i, power));
	return (0);
}
