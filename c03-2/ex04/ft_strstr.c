/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 09:13:57 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/20 09:44:27 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *str, char *str1, int n)
{
	int	i;

	i = 0;
	while (i < (n - 1))
	{
		if (str[i] == '\0' || str[i] != str1[i])
			break ;
		i++;
	}
	return (str[i] - str1[i]);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	to_find_len;

	to_find_len = 0;
	while (to_find[to_find_len] != '\0')
		to_find_len++;
	if (to_find_len == 0)
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_strncmp(str + i, to_find, to_find_len) == 0)
			return (str + i);
		i++;
	}
	return (0);
}
/*
int	main() {
	printf("%s\n", ft_strstr("FizzBuzzMan", "Buzz"));
	printf("%s\n", ft_strstr("FizzBuzzMan", "Buzzy"));
	printf("%s\n", ft_strstr("FizzBuzzMan", ""));
}
*/
