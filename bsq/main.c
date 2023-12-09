/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:28:51 by izuaim            #+#    #+#             */
/*   Updated: 2023/12/04 13:36:27 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	solve(char *input, t_position dimension, t_map_options map_opt)
{
	int				**levels;
	int				**obstacles;

	obstacles = initialize_2darray(dimension);
	populate_obstacles(obstacles, dimension, input);
	levels = initialize_2darray(dimension);
	traverse_grid(dimension, levels, obstacles);
	print_first_largest(levels, dimension, obstacles, map_opt);
}

void	init_map(t_position *dimension, t_map_options *map_opt)
{
	dimension -> x = -1;
	dimension -> y = -1;
	map_opt -> empty_c = ' ';
	map_opt -> obstacle_c = ' ';
	map_opt -> full_c = ' ';
}

void	solve_stdin(t_position *dimension, t_map_options *map_opt)
{
	char			*map;

	init_map(dimension, map_opt);
	map = parse_stdin(dimension, map_opt);
	if (map != NULL)
	{
		map = parse_map(map, dimension, *map_opt);
		if (check_map_opt_valid(map) != NULL)
		{
			solve(map, *dimension, *map_opt);
			free(map);
		}
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int				index;
	char			*map;
	t_position		dimension;
	t_map_options	map_opt;

	if (argc == 1)
		solve_stdin(&dimension, &map_opt);
	index = 1;
	while (index < argc)
	{
		init_map(&dimension, &map_opt);
		map = read_file(argv[index], &dimension, &map_opt);
		if (map != NULL)
		{
			map = parse_map(map, &dimension, map_opt);
			if (check_map_opt_valid(map) != NULL)
			{
				solve(map, dimension, map_opt);
				free(map);
			}
		}
		write(1, "\n", 1);
		index ++ ;
	}
	return (0);
}
