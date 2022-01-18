<<<<<<< HEAD
#include <unistd.h>

void	ft_print(char *solve)
{
	int	i;

	i = 0;
	while (solve[i])
	{
		write(1, &solve[i], 1);
		write(1, " ", 1);
		i++;
	}
}

int	ft_is_promising(int	r)
{
	int	i;

	i = 0;
	while ( i < r)
	{
		if (solve[r] == solve[i] || abs(solve[r] - solve[i]) == abs(r - i))
			return (0);
		i++;
	}
	return (1);
}

void	ft_solve_puzzle(char *solve, int i)
{
	int	c;

	if (ft_is_promising(i))
	{
		if(i == 10)
		{
			ft_print();
			return ;
		}
		while (c <= n)
		{
			solve[c + 1] = c;
			ft_solve_puzzle(c + 1);
		}
	}
}
}

int	ft_ten_queens_puzzle(void)
{
	int	n;
	char	solve[11] = {'0', }

	n = 10;
	ft_solve_puzzle(solve, 0);
	return (0);

}
=======
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_ten_queens_puzzle_test(int table[10], int x, int y)
{
	int i;

	i = -1;
	while (++i < x)
		if (y == table[i] ||
				i + table[i] == x + y ||
				i - table[i] == x - y)
			return (0);
	return (1);
}

void	ft_ten_queens_puzzle_recur(int table[10], int *res, int pos)
{
	int i;
	int i2;

	if (pos == 10)
	{
		*res += 1;
		i2 = -1;
		while (++i2 < 10)
			ft_putchar(table[i2] + '0');
		ft_putchar('\n');
	}
	else
	{
		i = -1;
		while (++i < 10)
			if (ft_ten_queens_puzzle_test(table, pos, i))
			{
				table[pos] = i;
				ft_ten_queens_puzzle_recur(table, res, pos + 1);
			}
	}
}

int		ft_ten_queens_puzzle(void)
{
	int		table[10];
	int		i;
	int		res;

	i = -1;
	while (++i < 10)
		table[i] = -1;
	res = 0;
	ft_ten_queens_puzzle_recur(table, &res, 0);
	return (res);
}
>>>>>>> db1ad025dcefe413a4960914c9137aa1c6ae6ac4
