#include <unistd.h>
#include "ft_stock_str.h"

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);
void	ft_show_tab(struct s_stock_str *par);

int	main(void)
{
	char *str[6] = {
		"Hello", "my", "exam", "?"
	};
	ft_show_tab(ft_strs_to_tab(4, str));
	return (0);
}
