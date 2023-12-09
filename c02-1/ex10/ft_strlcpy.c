/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 09:16:09 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/19 09:53:02 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char	*src, unsigned int size)
{
	unsigned int	i;
	unsigned int	str_length;

	str_length = 0;
	while (src[str_length] != '\0')
		str_length++;
	if (size <= 0)
		return (str_length);
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (str_length);
}

/*
int main()
{
	char dest[10];
	int output1 = ft_strlcpy(dest, "cpy_texting", 8);
	char dest2[10];
	int output2 = ft_strlcpy(dest2, "cpy text", 10);
	char dest3[10] = "";
	int output3 = ft_strlcpy(dest3, "cpy_t", 0);

	printf("dest: %s, out1: %d\n", dest, output1);
	printf("dest2: %s, out2: %d\n", dest2, output2);
	printf("dest3: %s, out3: %d\n", dest3, output3);
}
*/
