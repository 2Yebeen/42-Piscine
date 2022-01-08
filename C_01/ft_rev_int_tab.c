#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int temp;

	i = 0;
	while(i < size/2)
	{
		temp = tap[i];
		tap[i] = tap[size - 1 -i];
		tap[size -1 -i] = temp;
		i++;
	}
}
