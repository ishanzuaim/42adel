/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 10:32:27 by izuaim            #+#    #+#             */
/*   Updated: 2023/12/03 19:35:26 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_header.h"

void	print_double(char *val, char **numbers)
{
	int	first_digit;
	int	second_digit;

	first_digit = (val[0] - '0');
	second_digit = (val[1] - '0');
	if (first_digit == 1)
	{
		ft_putstr(numbers[10 + second_digit]);
	}
	else
	{
		ft_putstr(numbers[20 + (first_digit - 2)]);
		if (val[1] > '0')
		{
			ft_putstr(" ");
			ft_putstr(numbers[char_to_num(val[1])]);
		}
	}
}

/*
   - digits could or could not be padded.
   - eg - 1 or 001
   */
void	print_triple(char *val, char **numbers)
{
	int	length;
	int	hundred_index;

	hundred_index = 28;
	length = ft_strlen(val);
	if (length == 3 && val[0] > '0')
	{
		ft_putstr(numbers[char_to_num(val[0])]);
		ft_putstr(" ");
		ft_putstr(numbers[hundred_index]);
	}
	if (length >= 2 && val[length - 2] > '0')
	{
		if (length == 3 && val[0] != '0')
			ft_putstr(" ");
		print_double(val + (length - 2), numbers);
	}
	else if (val[length - 1] > '0')
	{
		if (length > 1 && (val[0] != '0' || val[1] != '0'))
			ft_putstr(" ");
		ft_putstr(numbers[char_to_num(val[length - 1])]);
	}
}

char	trim_spaces(int file)
{
	char	c;

	read(file, &c, 1);
	while (is_space(c))
		read(file, &c, 1);
	return (c);
}
