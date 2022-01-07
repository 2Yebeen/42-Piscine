#include <unistd.h>
#include "rush01.c"

void rush(int col, int row);
int atoi(char *av);

int main(int ac, char **av)
{
	int col;
	int row;

	if (av[1][0] == '-' || av[2][0] == '-')
		return (0);
	col = atoi(av[1]);
	row = atoi(av[2]);
	if (col > 2147483647 || row > 2147483647 || col < -2147483648 || row < -2147483648)
		return (0);
	rush(col, row);
	return (0);
}

int atoi(char *av)
{
	int i;
	int num;

	i = 0;
	num = 0;
	while(av[i] != '\0')
	{
		if (av[i] >= '0' && av[i] <= '9')
		{
			num *= 10;
			num += av[i] - '0';
			i++;
		}
		else
			return (0);

	}
	return (num);
}
