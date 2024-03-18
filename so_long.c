/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:47:32 by jomendes          #+#    #+#             */
/*   Updated: 2024/03/18 14:19:27 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	if (!check_args(ac, av))
		return (0);
	t_program	vars;

	vars.mlx = mlx_init();
	if (!vars.mlx)
		error("MLX initialization failed\n");
	vars.win = mlx_new_window(vars.mlx, 500, 500, "Janelona");
	if (!vars.win)
		error("Window creation failed\n");
	mlx_loop(vars.mlx);
	return (0);
}