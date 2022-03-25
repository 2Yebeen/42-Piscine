/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:55:37 by yeblee            #+#    #+#             */
/*   Updated: 2022/01/26 20:46:57 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTION_H
# define FUNCTION_H

# include "bsq.h"
# include "struct.h"

t_map		*ft_read_file(char *file);
t_map		*ft_read_stdin(void);
t_map		*ft_read_map(int fd, t_map *map, int *size, int cnt);
t_square	*ft_find_bsq(t_map *map);
void		ft_find_bsq_sub(int i, t_map *map, int **arr, t_square *square);

int			**make_arr(t_map *map);
void		ft_modify_square(t_square *square, int x, int y, int len);
void		ft_modify_map(t_map *map, t_square *square);
void		ft_print(t_map *map, t_square *square);
void		ft_free_map(t_map *map, int size);
int			ft_parse_map_info_sub(t_map *map, char *info);
int			ft_read_map_sub(int *idx, t_map *map, char *line);
int			ft_parse_map_info(t_map *map, char *info);
void		bsq(char *file);

char		*ft_expand_size(char *src, int *size);
char		*ft_free_line(char *line);
int			ft_check_square(int **arr, int i, int j);

int			ft_atoi(char *str);
void		ft_strncpy(char *dst, char *src, int size);
int			ft_strlen(char *str);
void		ft_putstr(char *str);
void		ft_error_msg(char *str);
int			ft_min(int a, int b, int c);
int			ft_is_printable(char c);
int			ft_is_duplicate(char a, char b, char c);

int			ft_is_valid_map_info(t_map *map);
int			ft_is_valid_map(char *line, t_map *map);

#endif