/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:20:46 by jomendes          #+#    #+#             */
/*   Updated: 2024/03/21 16:52:24 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "minilibx-linux/mlx.h"
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"
# include "get_next_line/get_next_line.h"
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_game
{
	// int			x;
	// int			y;
	char 		**map;
	int			map_width;
	int			map_heigth;
	void		*mlx;
	void		*win;
	void		**img;
}				t_game;

void	error(char *str);
int		check_name(char *str);
int		check_args(int ac, char **av);
int		key_hook(int key);
void	init_images(t_game *vars);
void	map_visualizer(t_game *vars);
int		map_heigth (char *file);
char	**get_map(char *file);

#endif
