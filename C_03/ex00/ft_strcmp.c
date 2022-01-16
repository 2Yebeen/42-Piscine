#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ( s1[i] != '\0' || s2[i] != '\0')
	{
		return (s1[i] > s2[i] ? 1 : -1);
		i++;
	}
	return (0);
}

int	main()
{
	int a;
	int b;
	char str1[] = "BBBB";
	char str2[] = "BBBB";
	
	a = ft_strcmp("asdf", "ABCD");
	printf("s1 : asdf, s2:ABCD => %d\n ", a);
	a = ft_strcmp("jhgf", "sdfgh");
	printf("s1 : jhgf, s2 : sdfgh => %d\n ",a);
	a = ft_strcmp("asdf", "asdf");
	printf("s1 : asdf, s2 : asdf => %d\n ", a);

	printf("strcmp (%s, %s) => %d\n ", str1, str2, strcmp(str1, str2));
	b = strcmp(str1, "aaaa");
	printf("strcmp (%s, aaaa) => %d\n ", str1, b);
	b = strcmp(str1, "AAAA");
	printf("strcmp (%s,AAAA) => %d\n ",str1, b);
	return (0);
}
