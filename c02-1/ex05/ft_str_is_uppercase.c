/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:22:35 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/18 19:25:23 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	printf("%d\n", ft_str_is_uppercase("AAUDISUHFIUSNZ"));
	printf("%d\n", ft_str_is_uppercase("asuiahbabs"));
	printf("%d\n", ft_str_is_uppercase(""));
}
*/
