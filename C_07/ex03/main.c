#include<stdio.h>
#include<stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int main()
{
	char *strs[4];

	strs[0] = "this";
	strs[1] = "is";
	strs[2] = "malloc";
	strs[3] = "exex";

	char	*s;
	s = ft_strjoin(4, strs, "1234");
	printf("%s\n", s);
}
