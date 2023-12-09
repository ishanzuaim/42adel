/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 14:11:24 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/19 09:31:10 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
int main()
{
	char dest[10];
	char* output1 = ft_strncpy(dest, "cpy_text", 9);
	char dest2[10];
	char* output2 = ft_strncpy(dest2, "cpy_t", 8);

	printf("out2: %s\n", output1);
	printf("out1: %s\n", output2);
	
	
}
*/
