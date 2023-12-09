/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:14:28 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/18 19:21:38 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
	printf("%d\n", ft_str_is_lowercase("ahaiusashuihadz"));
	printf("%d\n", ft_str_is_lowercase("asuiahbYbs"));
	printf("%d\n", ft_str_is_lowercase(""));
}
*/
