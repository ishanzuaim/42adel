/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_reader.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwoidt <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 13:00:46 by dwoidt            #+#    #+#             */
/*   Updated: 2023/12/03 18:57:58 by dwoidt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "ft_header.h"

int	str_to_index(char *str)
{
	int	length;
	int	i;

	length = ft_strlen(str);
	if (length == 1)
		return (str[0] - '0');
	if (length == 2)
		return (check2digit(str));
	if (str[0] != '1')
		return (-1);
	i = 0;
	while (i + 1 != length)
	{
		if (str[i + 1] != '0')
			return (-1);
		i++;
	}
	if (i == 2)
		return (28);
	if (i % 3 != 0)
		return (-1);
	if ((i / 3) > 12)
		return (-1);
	return (28 + (i / 3));
}

int	get_index(int file, char c)
{
	int		length;
	int		result;
	int		cap;
	char	*number_string;
	int		index;

	cap = 2;
	number_string = malloc(sizeof(char ) * (cap + 1));
	length = 0;
	if (is_space(c))
		c = trim_spaces(file);
	result = 1;
	while (result && is_number(c))
	{
		number_string = ft_realloc(number_string, length, c, &cap);
		length++;
		result = read(file, &c, 1);
	}
	number_string[length] = '\0';
	index = str_to_index(number_string);
	free(number_string);
	if (c != ':')
		trim_spaces(file);
	return (index);
}

int	read_string(int file, char **strings, int index)
{
	int		cap;
	int		length;
	int		result;
	char	c;
	char	*string;

	cap = 2;
	string = malloc(sizeof(char) * cap);
	length = 0;
	c = trim_spaces(file);
	result = 1;
	while (result && (c >= ' ' && c <= '~'))
	{
		string = ft_realloc(string, length, c, &cap);
		result = read(file, &c, 1);
		length++;
	}
	if (index != -1)
		strings[index] = ft_realloc(string, length, '\0', &cap);
	return (result);
}

void	append_string(int file, char *strings[])
{
	int		i;
	char	c;
	int		index;

	c = ' ';
	i = 0;
	while (read(file, &c, 1))
	{
		while (!(is_number(c)))
			read(file, &c, 1);
		index = get_index(file, c);
		read_string(file, strings, index);
		i++;
	}
}

char	**file_reader(char *filepath)
{
	int		file;
	char	**strings;

	strings = malloc(sizeof(char *) * 42);
	strings[41] = NULL;
	file = open(filepath, O_RDONLY);
	if (file == -1)
	{
		ft_putstr("Dict Error\n");
		return (NULL);
	}
	append_string(file, strings);
	close(file);
	return (strings);
}
