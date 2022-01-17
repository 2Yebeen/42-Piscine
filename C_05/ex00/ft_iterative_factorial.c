<<<<<<< HEAD
#include <unistd.h>

int ft_iterative_factorial(int nb)
{

}

int main ()
{
	return (0);
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 10:02:27 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/17 10:56:57 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int num;

	num = 1;
	if (nb < 0)
		return (0);
	while (1 < nb)
	{
		num *= nb;
		nb--;
	}
	return (num);
>>>>>>> 15b8f2eb34e60dff2a50785c141cc13796d43f30
}
