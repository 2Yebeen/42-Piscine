#include <stdio.h>

int ft_atoi_base(char *str, char *base);

int main()
{
	printf("%d", ft_atoi_base("123", "0123456789"));
	return (0);
}