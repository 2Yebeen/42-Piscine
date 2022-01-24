/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:55:37 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/24 14:59:14 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTION_H
# define FUNCTION_H

# include "bsq.h"
# include "struct.h"

int			ft_find_min(int a, int b, int c);
int			ft_intcmp(int a, int b);
int			**ft_make_arr(t_map *map);
int			ft_check_square(int **arr, int i, int j);
int			ft_is_number(char c);
int			ft_atoi(char *str);
int			ft_is_valid_map(char *line, t_map *map);
int			ft_read_map_sub(int *idx, t_map *map, char *line);
int			ft_strlen(char *str);
int			ft_parse_map_info(t_map *map, char *info);
int			ft_parse_map_info_sub(t_map *map, char *info);
char		*ft_read_line(int fd);
char		*ft_free_line(char *line);
char		*ft_expand_size(char *src, int *size);
void		ft_strncpy(char *dst, char *src, int size);
void		ft_print(t_map *map, t_square *square);
void		ft_change_square(t_square *square, int x, int y, int len);
void		ft_free_map(t_map *map, int size);
void		ft_modify_map(t_map *map, t_square *square);
void		ft_putchar(char c);
void		ft_putstr(char *str);
void		ft_map_error(void);
t_map		*ft_read_file(char *file);
t_map		*ft_read_stdin(void);
t_square	*ft_find_bsq(t_map *map);

#endif