/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:22:18 by jomendes          #+#    #+#             */
/*   Updated: 2024/03/21 16:57:14 by jomendes         ###   ########.fr       */
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
		error("Choose one map\n");
	if (ac == 2 && !check_name(av[1]))
		return (1);
	if (ac > 2)
		error("Choose only one map\n");
	return (0);
}

int		ft_checkchar(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}
