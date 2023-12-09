/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 09:45:10 by izuaim            #+#    #+#             */
/*   Updated: 2023/12/09 12:05:27 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_length;
	unsigned int	src_length;
	unsigned int	i;

	dest_length = 0;
	src_length = 0;
	i = 0;
	while (dest[dest_length] != '\0')
		dest_length++;
	while (src[src_length] != '\0')
		src_length++;
	if (size <= dest_length)
		return (src_length + size);
	size -= dest_length;
	while (i < size - 1)
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i] = '\0';
	return (src_length + dest_length);
}
/*
int main() {
	char dest[9] = "Fizz";
	int output = ft_strlcat(dest, "Buzz", 9);
	printf("dest: %s, out: %d\n", dest, output);

	char dest1[9] = "Fizz";
	int output1 = ft_strlcat(dest1, "Buzz", 7);
	printf("dest: %s, out1: %d\n", dest1, output1);

	char dest2[5] = "Fizz";
	int output2 = ft_strlcat(dest2, "A", 1);
	printf("dest: %s, out2: %d\n", dest2, output2);

	char dest3[5] = "Fizz";
	int output3 = ft_strlcat(dest3, "A", 0);
	printf("dest: %s, out2: %d\n", dest3, output3);
}
*/
