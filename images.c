/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   images.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:23:10 by jomendes          #+#    #+#             */
/*   Updated: 2024/03/22 13:25:57 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_images(t_game *vars)
{	
	int	i;

	i = 0;
	vars->img = malloc(sizeof(void *) * 2);
	if (!vars->img)
		return ;
	vars->img[0] = mlx_xpm_file_to_image(vars->mlx, \
		"imagens/beer.xpm", &i, &i);
	vars->img[1] = mlx_xpm_file_to_image(vars->mlx, \
		"imagens/Girl1.xpm", &i, &i);
	vars->img[2] = mlx_xpm_file_to_image(vars->mlx, \
		"imagens/Girl2.xpm", &i, &i);
	vars->img[3] = mlx_xpm_file_to_image(vars->mlx, \
		"imagens/Girl3.xpm", &i, &i);
	vars->img[4] = mlx_xpm_file_to_image(vars->mlx, \
		"imagens/Girl4.xpm", &i, &i);
	vars->img[5] = mlx_xpm_file_to_image(vars->mlx, \
		"imagens/Girl5.xpm", &i, &i);
	vars->img[6] = mlx_xpm_file_to_image(vars->mlx, \
		"imagens/Girl6.xpm", &i, &i);
	vars->img[7] = mlx_xpm_file_to_image(vars->mlx, \
		"imagens/Girl7.xpm", &i, &i);
	vars->img[8] = mlx_xpm_file_to_image(vars->mlx, \
		"imagens/Girl8.xpm", &i, &i);
	vars->img[9] = mlx_xpm_file_to_image(vars->mlx, \
		"imagens/Girl9.xpm", &i, &i);
}

void	map_visualizer(t_game *vars)
{
	int y;
	int x;

	y = 0;
	while (vars->map[y])
	{
		x = 0;
		while (vars->map[y][x])
		{
			printf("AI\n");
			if (vars->map[y][x] == '1')
				mlx_put_image_to_window(vars->mlx, vars->win, \
				vars->img[1], y * 64, x * 64);
			printf("AI\n");
			// else 
			// 	mlx_put_image_to_window(vars->mlx, vars->win, \
			// 	vars->img[0], y * 64, x * 64);
			x++;
		}
		y++;
	}
}

