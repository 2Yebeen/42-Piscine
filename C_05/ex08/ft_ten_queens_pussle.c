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
