#include <unistd.h>
#include "rush01.c"

void rush(int x, int y);

int main(int ac, char **av)
{
	int col;
	int row;
	int ic;
	int ir;

	if (av[1][0] == '-' || av[2][0] == '-')
	{
		return (0);
	}
	else
	{
		col = av[1][0] - '0';
		row = av[2][0] - '0';
	}
	if ((av[1][ic] >= '1' && av[1][ic] <= '9') && (av[2][ir] >= '1' && av[2][ir] <='9'))
		rush(col, row);
	else
		return (0);
	return (0);
}
