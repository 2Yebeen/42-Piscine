/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_momory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:02:24 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/19 16:04:02 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	up_addr(char *pointchar, int n)
{
	if (pointchar[n] == '9')
		pointchar[n] = 'a';
	else if (pointchar[n] < 'f')
		pointchar[n]++;
	else
	{
		pointchar[n] = '0';
		up_addr(pointchar, n - 1);
	}
}

void	tempmaker(char *temp, char *point_char)
{
	int		i;
	char	*str_16;

	str_16 = "0123456789abcdef";
	i = 0;
	while (i < 75)
	{
		if (i < 16)
			temp[i] = point_char[i];
		else
			temp[i] = ' ';
		i++;
	}
	temp[16] = 0x3a;
	temp[74] = '\0';
}

void	temp_print(char *temp, char *addr_char,
		unsigned int line, unsigned int size)
{
	char	*str_16;
	int		k;

	str_16 = "0123456789abcdef";
	k = 0;
	while (k + line * 16 < size + 16 && k < 16)
	{
		if (k % 2 == 0)
		{
			temp[k / 2 * 5 + 17] = ' ';
			temp[k / 2 * 5 + 18] = str_16[addr_char[k + line * 16] / 16];
			temp[k / 2 * 5 + 19] = str_16[addr_char[k + line * 16] % 16];
		}
		else
		{
			temp[k / 2 * 5 + 20] = str_16[addr_char[k + line * 16] / 16];
			temp[k / 2 * 5 + 21] = str_16[addr_char[k + line * 16] % 16];
		}
		if (0x20 <= addr_char[k + line * 16]
			&& addr_char[k + line * 16] <= 0x7e)
			temp[k + 58] = addr_char[k + line * 16];
		else
			temp[k + 58] = '.';
		k++;
	}
}

void	print_all(char *point_char, char *addr_char,
		unsigned int size, unsigned int line)
{
	char	*str_16;
	char	temp[75];

	str_16 = "0123456789abcdef\0";
	tempmaker(temp, point_char);
	temp_print(temp, addr_char, line, size);
	up_addr(point_char, 14);
	write(1, &temp, 75);
	write(1, "\n", 1);
	if (line * 16 < size)
		print_all(point_char, addr_char, size, line + 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char						*str_16;
	char						point_char[17];
	char						*addr_char;
	unsigned long long int		addr_int;
	int							i;

	str_16 = "0123456789abcdef\0";
	addr_char = (char *) addr;
	addr_int = (unsigned long long int ) &addr;
	i = 0;
	while (i < 16)
		point_char[i++] = '0';
	point_char[i] = '\0';
	i = 0;
	while (addr_int / 16)
	{
		point_char[15 - i] = str_16[(int)(addr_int % 16)];
		addr_int /= 16;
		i++;
	}
	point_char[15 - i] = str_16[(int)(addr_int % 16)];
	print_all(point_char, addr_char, size, 0);
	return (addr);
}
