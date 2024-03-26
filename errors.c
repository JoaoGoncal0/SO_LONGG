/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:27:00 by jomendes          #+#    #+#             */
/*   Updated: 2024/03/25 15:24:59 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	error(char *str)
{
	write(2, "Error\n", 6);
	write(2, str, ft_strlen(str));
	exit(1);
}

int		quadradinho(char **map)
{
	int	i;
	int	row;

	row = ft_strlen(map[0]);
	i = 0;
	while (map[i])
	{
		if (ft_strlen(map[i]) != row)
			return (0);
		i++;
	}
	return (1);
}



void	destroy(t_game *vars)
{
	int	i;

	if (vars->map)
	{
		i = 0;
		while (vars->map[i])
			free(vars->map[i++]);
		free(vars->map);
	}
	i = 0;
	if (vars->img)
	{
		i = 0;
		while (i < 12)
			mlx_destroy_image(vars->mlx, vars->img[i++]);
		free(vars->img);
	}
	if (vars->win)
	{
		mlx_destroy_window(vars->mlx, vars->win);
		free(vars->win);
	}
	if (vars->mlx)
	{
		mlx_destroy_display(vars->mlx);
		free(vars->mlx);
	}
	free(vars);
}

