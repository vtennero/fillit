/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmerabet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 22:41:21 by mmerabet          #+#    #+#             */
/*   Updated: 2017/11/21 10:56:29 by mmerabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FILLIT_H
# define FT_FILLIT_H
# define TRUE 1
# define FALSE 0

#include "libft/libft.h"

typedef int t_bool;

typedef struct	s_point
{
	int			x;
	int			y;
}				t_point;

typedef struct	s_tetri
{
	char		c;
	t_point		pos;
	t_point		points[4];
	t_bool		ignore;
}				t_tetri;

typedef struct	s_mapdata
{
	int			size;
	char		**arr;
	t_list		*tetris;
}				t_mapdata;


t_list		*ft_get_tetris(int fd);
t_list		*ft_read_tetris(int fd, char buf[6], int buffsize, int i);
t_bool		ft_build_tetris(t_list *lst);
t_bool		ft_valid_tetris(t_list *lst);
t_list		*ft_absolute_tetris(t_list *lst);
t_mapdata	*ft_solve_tetris(t_list *tetris);
void		ft_map_tetris(t_mapdata *mapdata);
void		ft_print_map(t_mapdata *mapdata);
t_tetri		ft_new_tetri(char c, int x, int y, int x0, int y0, int x1, int y1,
					int x2, int y2, int x3, int y3);


#endif
