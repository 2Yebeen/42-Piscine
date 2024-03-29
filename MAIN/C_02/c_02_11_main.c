/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 10:35:29 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/11 20:04:35 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	ft_get_hexa(int n)
{
	if (n < 10)
		return (n + '0');
	return (n - 10 + 'a');
}

void	ft_print(int c)
{
	char			asci;

	if (c < 0)
	{
		c += 256;
	}
	write(1, "\\", 1);
	asci = ft_get_hexa(c / 16);
	write(1, &asci, 1);
	asci = ft_get_hexa(c % 16);
	write(1, &asci, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
			ft_print(str[i]);
		i++;
	}
}

int	main()
{
	int i;
	
	ft_putstr_non_printable("Coucou\ntu vas bien ?"); 
	write(1, "\n", 1); 
	ft_putstr_non_printable("\x01\x02oucou\n\xfe\xff, fe ff");
}
