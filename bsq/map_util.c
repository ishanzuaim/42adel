/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_util.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:17:59 by shulee            #+#    #+#             */
/*   Updated: 2023/12/04 18:18:00 by shulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "functions.h"

/* reallocate memory for dynamic string size */
char	*reallocate(char *ptr, int size)
{
	char	*newptr;
	int		i;

	newptr = malloc(size + 5001);
	i = 0;
	while (i < size && ptr[i])
	{
		newptr[i] = ptr[i];
		i ++ ;
	}
	free(ptr);
	newptr[i] = '\0';
	return (newptr);
}

char	*map_error(void)
{
	write(1, "map error\n", 10);
	return (NULL);
}

char	*check_map_opt_valid(char *map)
{
	int	i;

	i = 0;
	if (map == NULL)
		return (NULL);
	while (map[i])
	{
		if (map[i] != '0' && map[i] != '1')
			return (map_error());
		i ++ ;
	}
	return ("ok");
}

int	**initialize_2darray(t_position dimension)
{
	int	**arr;
	int	i;
	int	j;

	arr = malloc(sizeof(int *) * dimension.x);
	if (!arr)
		return (NULL);
	i = 0;
	j = 0;
	while (i < dimension.x)
	{
		arr[i] = malloc(sizeof(int) * dimension.y);
		i++;
	}
	return (arr);
}
