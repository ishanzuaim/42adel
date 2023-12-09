/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 10:32:05 by izuaim            #+#    #+#             */
/*   Updated: 2023/12/03 18:40:16 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_header.h"

int	get_level(char *val)
{
	if (ft_strlen(val) <= 3)
		return (0);
	return (1 + get_level(val + 3));
}

void	remove_leading_zeros(char **val)
{
	while (**val && **val == '0')
		(*val)++;
}

int	is_all_zero(char *val)
{
	while (*val)
		if (*(val++) != '0')
			return (0);
	return (1);
}

void	print_number(char *val, int is_first, int level, char **numbers)
{
	char	str[4];
	int		group_size;

	if (level < 0)
		return ;
	group_size = ft_strlen(val) - (level * 3);
	ft_strlcpy(str, val, group_size + 1);
	if (!is_all_zero(str))
	{
		if (!is_first)
			ft_putstr(" ");
		print_triple(str, numbers);
		if (level != 0)
		{
			ft_putstr(" ");
			ft_putstr(numbers[level + 28]);
		}
	}
	print_number(val + group_size, 0, level - 1, numbers);
}

void	convert_to_num(char *val, char **numbers)
{
	int	level;

	if (is_all_zero(val))
	{
		ft_putstr(numbers[0]);
		ft_putstr("\n");
		return ;
	}
	remove_leading_zeros(&val);
	if (ft_strlen(val) > 39)
		return ;
	level = get_level(val);
	print_number(val, 1, level, numbers);
	ft_putstr("\n");
}
