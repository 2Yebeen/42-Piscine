#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*result_tab;

	i = 0;
	result_tab = (int *)malloc(sizeof(int) * length);
	while (i < length)
	{
		result_tab[cur] = (*f)(tab[i]);
		i++;
	}
	return (result_tab);
}
