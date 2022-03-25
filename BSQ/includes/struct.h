/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:54:01 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/26 16:46:11 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct t_square
{
	int		x;
	int		y;
	int		len;
}	t_square;

typedef struct t_map
{
	char	full;
	char	empty;
	char	obstacle;
	int		x_len;
	int		y_len;
	char	**arr;
}	t_map;

#endif