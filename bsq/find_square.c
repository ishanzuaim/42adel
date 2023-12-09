/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:41:51 by izuaim            #+#    #+#             */
/*   Updated: 2023/12/04 18:41:53 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	expand_square(t_position pos, int **obstacles, t_position dimn, int level)
{
	if (pos.x + level >= dimn.x || pos.y + level >= dimn.y)
		return (level);
	if (has_obstacle(obstacles, pos, level))
		return (level);
	return (expand_square(pos, obstacles, dimn, level + 1));
}

void	traverse_grid(t_position dimension, int **levels, int **obstacles)
{
	int			x;
	int			y;
	int			level;
	t_position	sqr_pos;
	int			max;

	x = 0;
	max = 0;
	while (x < dimension.x)
	{
		y = 0;
		while (y < dimension.y)
		{
			sqr_pos.x = x;
			sqr_pos.y = y;
			level = expand_square(sqr_pos, obstacles, dimension, max);
			if (level > max)
				max = level;
			levels[sqr_pos.x][sqr_pos.y] = level;
			y++;
		}
		x++;
	}
}

int	has_obstacle(int **obstacles, t_position sqr_pos, int level)
{
	int	x;
	int	y;

	x = sqr_pos.x;
	while (x <= (sqr_pos.x + level))
	{
		y = sqr_pos.y;
		while (y <= (sqr_pos.y + level))
		{
			if (obstacles[x][y])
				return (1);
			y++;
		}
		x++;
	}
	return (0);
}
