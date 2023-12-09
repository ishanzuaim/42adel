/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:37:31 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/19 09:57:41 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '~')
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
	printf("%d\n", ft_str_is_printable("ai891723nd!kj ~:{:}\\?>!@#!@%^&*"));
  	printf("%d\n", ft_str_is_printable("\x01"));
}
*/
