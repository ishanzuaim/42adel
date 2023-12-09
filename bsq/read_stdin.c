/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_stdin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:32:06 by izuaim            #+#    #+#             */
/*   Updated: 2023/12/06 11:32:08 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "functions.h"

char	*ft_malloc_strcat(char *str, char *buffer, int length)
{
	int	i;
	int	curr_len;

	curr_len = 0;
	while (str[curr_len])
		curr_len++;
	str = reallocate(str, length + curr_len);
	i = 0;
	while (buffer[i])
	{
		str[curr_len + i] = buffer[i];
		i++;
	}
	return (str);
}

char	*read_stdin(void)
{
	char	*map;
	int		result;
	char	buffer[10000];

	map = malloc(1);
	map[0] = '\0';
	while (1)
	{
		result = read(0, buffer, 10000);
		if (!result)
			break ;
		buffer[result] = '\0';
		map = ft_malloc_strcat(map, buffer, result);
	}
	return (map);
}

char	*parse_map_stdin(char *input, int bookmark)
{
	char	*buf;
	int		j;

	j = 0;
	buf = malloc(ft_strlen(input));
	while (input[bookmark])
	{
		buf[j++] = input[bookmark];
		bookmark ++ ;
	}
	return (buf);
}

char	*parse_stdin(t_position *dimension, t_map_options *map_opt)
{
	char	*input;
	char	*buffer;
	int		i;

	i = 0;
	input = read_stdin();
	buffer = malloc(100);
	while (input[i])
	{
		if (input[i] == '\n')
		{
			buffer[i] = '\0';
			if (set_options(buffer, dimension, map_opt) == NULL)
				return (NULL);
			break ;
		}
		buffer[i] = input[i];
		i ++ ;
	}
	free(buffer);
	return (parse_map_stdin(input, i + 1));
}
