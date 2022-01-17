/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 10:29:50 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/17 11:09:33 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int num;

	num = 1;
	if(power < 0)
		return (0);
	while (power > 0)
	{
		num *= nb;
		power--;
	}
	return (num);
}
