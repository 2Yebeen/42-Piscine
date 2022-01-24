/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:54:01 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/24 14:54:36 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct s_square{
	int		x;
	int		y;
	int		len;
}				t_square;

typedef struct s_map{
	char	full;
	char	empty;
	char	obstacle;
	int		x_len;
	int		y_len;
	char	**arr;
}				t_map;

#endif