/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:22:18 by jomendes          #+#    #+#             */
/*   Updated: 2024/03/18 14:20:40 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int		check_name(char *str)
{
	int	i;

	i = ft_strlen(str) - 4;
	if (i > 4 && ft_strncmp(str, ".ber", 4) == 0)
		return (1);
	return (0);
}

int		check_args(int ac, char **av)
{
	if (ac == 1)
		error("Chose one map\n");
	if (ac == 2 && !check_name(av[1]))
		return (1);
	if (ac > 2)
		error("Chose only one map\n");
	return (0);
}