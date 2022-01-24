#include <stdio.h>

void	ft_foreach(int *tab, int length, void(*f)(int));

void	bus_error(int i)
{
	printf("%d, ", i);
}

int	main(void)
{
	int	tab[4] = {1, 2, 3, 4};
	ft_foreach(tab, 4, &bus_error);
}
