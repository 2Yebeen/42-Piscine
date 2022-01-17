#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	char	*str;
	char	*base;
	
	str =  "  	\n    ---+--+1a4yab4wp";
	base = "a	b";
	printf("%d\n", ft_atoi_base(str, "0123456789abcdef"));
	return (0);
}
