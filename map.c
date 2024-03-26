/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 12:41:21 by jomendes          #+#    #+#             */
/*   Updated: 2024/03/25 13:06:07 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int		map_heigth(char *file)
{
	int fd;
	char *row;
	int	counter;

	fd = open(file, O_RDONLY);
	row = get_next_line(fd);
	counter = 0;
	while (row)
	{
		row = get_next_line(fd);
		counter++;
	}
	close(fd);
	return (counter);
}


char	**get_map(char *file)
{
	int	fd;
	int	lines_number;
	char **map;
	char *row;
	int	line;

	lines_number = map_heigth(file);
	map = malloc(sizeof(char *) * (lines_number + 1));
	row = get_next_line(-1);
	fd = open(file, O_RDONLY);
	row = get_next_line(fd);
	line = 0;
	while (row)
	{
		map[line++] = row;
		row = get_next_line(fd);
	}
	map[line] = NULL;
	close(fd);
	return (map);
}

