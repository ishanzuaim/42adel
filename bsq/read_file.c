/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:01:37 by shulee            #+#    #+#             */
/*   Updated: 2023/12/04 16:39:49 by shulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "functions.h"

char	*assign_options(char *buf, t_map_options *opt, int *i)
{
	char	*num;

	opt -> full_c = buf[(*i)--];
	opt -> obstacle_c = buf[(*i)--];
	opt -> empty_c = buf[(*i)--];
	num = malloc(ft_strlen(buf) - 2);
	return (num);
}

int	file_length(char *map_name)
{
	int		fd;
	int		len;
	char	c;

	len = 0;
	fd = open(map_name, O_RDONLY);
	if (fd == -1)
	{
		map_error();
		return (-1);
	}
	while (read(fd, &c, 1))
		len ++ ;
	close(fd);
	return (len);
}

char	*set_options(char *buf, t_position *dimension, t_map_options *opt)
{
	int		i;
	int		j;
	char	*num;

	if (ft_strlen(buf) < 4)
		return (map_error());
	i = ft_strlen(buf) - 1;
	if (buf[i] == buf [i - 1] || buf[i - 1] == buf[i - 2]
		|| buf[i] == buf[i - 2])
		return (map_error());
	num = assign_options(buf, opt, &i);
	j = 0;
	while (i >= 0)
	{
		if (buf[i] < '0' || buf[i] > '9')
			return (map_error());
		num[j++] = buf[i];
		i -- ;
	}
	num[j] = '\0';
	dimension -> x = ft_atoi(num);
	free(num);
	return ("ok");
}

char	*read_map(int fd, int size)
{
	int		len;
	char	c;
	char	*buf;

	buf = malloc(size);
	len = 0;
	while (read(fd, &c, 1))
		buf[len++] = c;
	buf[len] = '\0';
	close (fd);
	return (buf);
}

char	*read_file(char *map_name, t_position *dimension, t_map_options *opt)
{
	int		fd;
	int		len;
	int		f_size;
	char	c;
	char	*buf;

	f_size = file_length(map_name);
	if (f_size < 0)
		return (NULL);
	fd = open(map_name, O_RDONLY);
	buf = malloc(1000);
	len = 0;
	while (read(fd, &c, 1))
	{
		if (c == '\n')
		{
			buf[len] = '\0';
			if (set_options(buf, dimension, opt) == NULL)
				return (NULL);
			break ;
		}
		buf[len++] = c;
	}
	free(buf);
	return (read_map(fd, f_size));
}
