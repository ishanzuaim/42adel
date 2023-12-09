/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:30:31 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/27 16:13:16 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	*ft_strdup(char *src)
{
	char	*new_src;

	new_src = (char *) malloc(sizeof(char) * ft_strlen(src));
	if (!new_src)
		return (NULL);
	ft_strcpy(new_src, src);
	return (new_src);
}

/*
int main()
{
	char* test = ft_strdup("Hlelo how are you\n");
	printf("%s", test);
}
*/
