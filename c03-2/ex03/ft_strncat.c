/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 08:54:53 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/20 10:37:49 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dest_len;

	i = 0;
	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (i < nb && src[i] != '\0')
	{
		dest[dest_len] = src[i];
		i++;
		dest_len++;
	}
	dest[dest_len] = '\0';
	return (dest);
}

/*
int main() {
	char dest[9] = "Fizz";
	printf("%s\n", ft_strncat(dest, "Buzz", 2));
	return 1;
}
*/
