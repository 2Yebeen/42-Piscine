int	ft_ultimate_range(int **range, int min, int max);
#include<stdio.h>
#include<stdlib.h>

int main()
{
	unsigned int ret;
	int	**array;
	array = (int **)malloc(sizeof(int *));
	ret = ft_ultimate_range(array, -2147483648, 2147483647);

	unsigned int i;
	printf("ret : %u\n\n",ret);
	for(i = 0; i < 20; i++)
		printf("%d\n", (*array)[i]);
	for(i = 4294967270U; i<= 4294967294U; i++)
		printf("%d\n", (*array)[i]);
	return (1);
}
