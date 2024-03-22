/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:47:32 by jomendes          #+#    #+#             */
/*   Updated: 2024/03/21 18:38:15 by jomendes         ###   ########.fr       */
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
	vars->map_width = ft_strlen(vars->map[0]);
	vars->map_heigth = map_heigth(file);
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
		printf("Teste1\n");
		vars->mlx = mlx_init();
		vars->win = mlx_new_window(vars->mlx, vars->map_width * 64, vars->map_heigth * 64, "Janelona");
		init_images(vars);
		printf("Teste 2\n");
		map_visualizer(vars);
		printf("Teste 3\n");
		mlx_loop(vars->mlx);
		free(vars);
		return (0);
	}
	else
	{
		error("Invalid arguments\n");
		free(vars);
		return (1);
	}
}