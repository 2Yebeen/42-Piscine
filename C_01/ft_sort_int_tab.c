#include <unistd.h>
void swap(int a*, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;

	i = 0;
	j = 0;
	while(i < size)
	{
		temp = i;
		j = i+1;
		while(j < size)
		{
			if(tab[i] <= tab[j])
				temp = j;
		}
		swqp(&tab[i], &tab[j]);
	}
}
