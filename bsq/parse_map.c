/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:53:19 by shulee            #+#    #+#             */
/*   Updated: 2023/12/04 18:53:20 by shulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "functions.h"

char	pair_map(char current, t_map_options opt)
{
	if (current == opt.empty_c)
		return ('0');
	else if (current == opt.obstacle_c)
		return ('1');
	else
		return ('2');
}

char	*check_map_len(t_position *dimension, t_position *bound)
{
	if (dimension -> y < 0)
		dimension -> y = bound -> y;
	else if (bound -> y != dimension -> y)
		return (map_error());
	bound -> y = 0;
	bound -> x ++ ;
	return ("ok");
}

char	*init_str(int *x, int *y, t_position *bound, char *input)
{
	char	*output;

	output = malloc(ft_strlen(input));
	*x = 0;
	*y = 0;
	bound -> x = 0;
	bound -> y = 0;
	return (output);
}

char	*last_check(t_position *dimension, t_position *bound)
{
	if (bound -> y > 0)
		if (check_map_len(dimension, bound) == NULL)
			return (NULL);
	if (bound -> x != dimension -> x)
		return (map_error());
	return ("");
}

char	*parse_map(char *map, t_position *dimension, t_map_options opt)
{
	int			i;
	int			j;
	t_position	bound;
	char		*res;

	if (ft_strlen(map) < 1)
		return (map_error());
	res = init_str(&i, &j, &bound, map);
	while (map[i])
	{
		if (map[i] != '\n')
		{
			res[j++] = pair_map(map[i], opt);
			bound.y ++ ;
		}
		else if (map[i] == '\n')
			if (check_map_len(dimension, &bound) == NULL)
				return (NULL);
		i ++ ;
	}
	res[j] = '\0';
	if (last_check(dimension, &bound) == NULL)
		return (NULL);
	free(map);
	return (res);
}
