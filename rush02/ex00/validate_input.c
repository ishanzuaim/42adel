/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:41:19 by izuaim            #+#    #+#             */
/*   Updated: 2023/12/03 18:16:25 by dwoidt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	check_dict(char	*str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if (str[c] < '0' || str[c] > '9')
		{
			write (1, "Dict Error\n", 11);
			return (0);
		}
		c++;
	}
	return (1);
}

int	validate_input(int argc, char *argv[])
{
	int		n;
	char	*str;

	if (argc < 2 || argc > 3)
	{
		write (1, "Error\n", 6);
		return (0);
	}
	n = 1;
	if (argc == 3)
		n += 1;
	str = argv[n];
	if (str[0] == '-')
	{
		write (1, "Error\n", 6);
		return (0);
	}
	return (check_dict(str));
}
