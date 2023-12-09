/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 10:32:12 by izuaim            #+#    #+#             */
/*   Updated: 2023/12/03 17:46:45 by dwoidt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	*ft_realloc(char *ptr, int len, char c, int *cap)
{
	int		i;
	char	*temp_ptr;

	if (len == *cap)
	{
		*cap *= 2;
		temp_ptr = ptr;
		ptr = malloc (sizeof(char) * (*cap + 1));
		i = 0;
		while (i < len)
		{
			ptr[i] = temp_ptr[i];
			i++;
		}
		free(temp_ptr);
	}
	ptr[len] = c;
	return (ptr);
}

char	**ft_calloc(int size)
{
	char	**ptr;
	int		i;

	i = 0;
	ptr = malloc(sizeof(char *) * 42);
	while (i < size)
	{
		ptr[i] = NULL;
		i++;
	}
	return (ptr);
}
