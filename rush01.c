#include <unistd.h>
#include "ft_putchar.c"
#include <stdio.h>

void ft_putchar(char c);

void rush(int c, int r)
{
	int row;
	int col;
	printf("%d %d\n", c, r);	
	row = 1;
	while(row <= r)
	{
		col = 1;
		while(col <= c)
		{
			if ((row == 1 && col == 1) || ((row == r && r != 1) && (col == c && c != 1)))
				ft_putchar('/');
			else if ((row == 1 && col == c) || (row == r && col ==1))
				ft_putchar('\\');
			else if (row == 1 || row == r || col == 1 || col == c) 
				ft_putchar('*');
			else 
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
