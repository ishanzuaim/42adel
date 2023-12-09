/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:57:47 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/20 08:25:02 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
int main() {
	printf("%d\n", ft_strcmp("hello", "hell"));
	printf("%d\n", ft_strcmp("hell", "hell"));
	printf("%d\n", ft_strcmp("hell", "hello"));
	printf("%d\n", ft_strcmp("s", ""));
	printf("%d\n", ft_strcmp("\200", ""));
}
*/
