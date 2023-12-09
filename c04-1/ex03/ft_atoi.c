/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:31:14 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/23 18:38:29 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	check_start(char c)
{
	return (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ');
}

int	check_neg(char c, int *neg_count)
{
	if (c == '-')
		*neg_count = *neg_count + 1;
	return (c == '-' || c == '+');
}

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	neg_count;
	int	is_start;

	num = 0;
	neg_count = 0;
	i = 0;
	is_start = 1;
	while (check_start(str[i]))
		i++;
	while (check_neg(str[i], &neg_count))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num *= 10;
		num += (str[i] - '0');
		i++;
	}
	if (neg_count % 2 != 0)
		num *= -1;
	return (num);
}
/*
int main()
{
	printf("%d\n", ft_atoi("\t\n\v\f\r   ---+--+1234ab567"));
	printf("%d\n", ft_atoi("+--013    01\t\t4!1"));
	printf("%d\n", ft_atoi("+- -013    01\t\t4!1"));
}
*/
