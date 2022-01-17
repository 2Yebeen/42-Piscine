#include <stdio.h>

int		ft_sqrt(int nb);

int		main(void)
{
	int i;
	int Seg_Fault;

	Seg_Fault = 100000000;
	i = 2147483647;
//	while (++i != Seg_Fault)
	printf("%d: %d\n", i, ft_sqrt(i));
}
