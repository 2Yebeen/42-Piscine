#include <unistd.h>
#include "ft_stock_str.h"

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);
void	ft_show_tab(struct s_stock_str *par);

int	main(int ac, char **av)
{
	int					i;
	struct s_stock_str	*ans;

	ans = ft_strs_to_tab(ac, av);
	ft_show_tab(ans);
	return (0);
}
