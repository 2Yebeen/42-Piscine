#include <unistd.h>
void ft_putchar(char *str);

int main()
{
	ft_putchar("abcdef");
	return (0);
}
void	ft_putchar(char *str)
{
	int i;

	while(:str[i] != '\0')
		i++;
	write(1, str, i);
}
