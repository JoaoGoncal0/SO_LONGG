/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:47:32 by jomendes          #+#    #+#             */
/*   Updated: 2024/03/26 16:24:14 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_game *start_game(char *file)
{
	t_game *vars;

	vars = malloc(sizeof(t_game));
	if (!vars)
		return (NULL);
	vars->map = get_map(file);
	vars->map_heigth = ft_strlen(vars->map[0]) - 1;
	vars->map_width = map_heigth(file);
	return (vars);
}

int	main(int ac, char **av)
{
	if (!check_args(ac, av))
		return (0);
	t_game	*vars;

	vars = NULL;
	if (ac == 2)
	{
		vars = start_game(av[1]);
		vars->mlx = mlx_init();
		vars->win = mlx_new_window(vars->mlx, vars->map_width * 64, vars->map_heigth * 64, "Janelona");
		init_images(vars);
		map_visualizer(vars);
		mlx_loop_hook(vars->mlx, animation, vars);
		mlx_loop(vars->mlx);
		free(vars);
		return (0);
	}
	else
	{
		error("Invalid arguments\n");
		return (1);
	}
}