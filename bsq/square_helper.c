/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square_helper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:41:59 by izuaim            #+#    #+#             */
/*   Updated: 2023/12/04 18:42:01 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

t_position	find_largest(int **levels, t_position dimension, int *max)
{
	int			i;
	int			j;
	t_position	largest_pos;

	*max = 0;
	i = 0;
	j = 0;
	while (i < dimension.x)
	{
		j = 0;
		while (j < dimension.y)
		{
			if (levels[i][j] > *max)
			{
				*max = levels[i][j];
				largest_pos.x = i;
				largest_pos.y = j;
			}
			j++;
		}
		i++;
	}
	return (largest_pos);
}

void	populate_obstacles(int **obstacles, t_position dimension, char *str)
{
	int	i;
	int	j;
	int	index;

	i = 0;
	while (i < dimension.x)
	{
		j = 0;
		while (j < dimension.y)
		{
			index = (i * dimension.y) + j;
			obstacles[i][j] = str[index] - '0';
			j++;
		}
		i++;
	}
}

void	print_pos(int x, int y, int **obstacles, t_map_options opt)
{
	if (obstacles[x][y])
		write(1, &opt.obstacle_c, 1);
	else
		write(1, &opt.empty_c, 1);
}

void	print_first_largest(int **levels, t_position dimension, int **obstacles
	, t_map_options opt)
{
	int			level;
	int			i;
	int			j;
	t_position	largest_pos;

	largest_pos = find_largest(levels, dimension, &level);
	i = 0;
	while (i < dimension.x)
	{
		j = 0;
		while (j < dimension.y)
		{
			if (i >= largest_pos.x && i < largest_pos.x + level
				&& j >= largest_pos.y && j < largest_pos.y + level)
				write(1, &opt.full_c, 1);
			else
				print_pos(i, j, obstacles, opt);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
