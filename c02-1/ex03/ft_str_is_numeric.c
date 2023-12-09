/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:06:26 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/18 19:12:14 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
			continue ;
		}
		return (0);
	}
	return (1);
}
/*
int main() {
	printf("%d\n", ft_str_is_numeric("12349108310"));
	printf("%d\n", ft_str_is_numeric("1234910a310"));
	printf("%d\n", ft_str_is_numeric(""));
}
*/
