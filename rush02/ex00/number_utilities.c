/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_utilities.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 10:35:13 by izuaim            #+#    #+#             */
/*   Updated: 2023/12/03 18:58:29 by dwoidt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	char_to_num(char c)
{
	return (c - '0');
}

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			result = result * 10 + (*str - '0');
		}
		else
		{
			break ;
		}
		str++;
	}
	return (sign * result);
}

int	is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	check2digit(char *str)
{
	if (str[0] == '1')
		return (ft_atoi(str));
	else
	{
		if (str[1] != '0')
			return (-1);
		return ((char_to_num(str[0]) - 2) + 20);
	}
}
