/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:20:46 by jomendes          #+#    #+#             */
/*   Updated: 2024/03/18 15:43:15 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "minilibx-linux/mlx.h"
# include "libft/libft.h"
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_position
{
	int			x;
	int			y;
}					t_position;

typedef struct s_map
{
	t_position	player;
	char 		**matrix;
	int			wall;
	int			empty_space;
	char		collectible;
	char		exit;
}					t_map;

typedef struct s_program
{
	void		*mlx;
	void		*win;
	t_map		map;
	void		**img;
	int			moves;
}					t_program;

void	error(char *str);
int		check_name(char *str);
int		check_args(int ac, char **av);

#endif
