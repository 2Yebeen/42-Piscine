char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

#include<stdio.h>

int main(int argc, char *argv[])
{
	if (argc != 4)
		return (0);
	
	char *ret;
	ret = ft_convert_base(argv[1], argv[2], argv[3]);
	printf("result : %s\n",ret);
	return (0);
}
