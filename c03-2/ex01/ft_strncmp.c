/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 08:32:27 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/20 17:26:42 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < (n - 1))
	{
		if (s1[i] == '\0' || s2[i] == '\0' || s2[i] != s1[i])
			break ;
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int main()
{
	printf("%d\n", ft_strncmp("Hello", "Hellz", 4));
	printf("%d\n", ft_strncmp("Hell\0z", "Hell\0a", 6));
	printf("%d\n", ft_strncmp("Hello", "Hellz", 5));
	printf("%d\n", ft_strncmp("Hellz", "Hello", 5));
	printf("%d\n", ft_strncmp("abcd", "AbCd", 0));
	printf("%d\n", ft_strncmp("a", "A", 100));
}
*/
