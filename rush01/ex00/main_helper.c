/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_misc_helper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 09:59:09 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/26 18:12:37 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "all_headers.h"

#define INT_SIZE 4

int *args_to_int_arr(char *args, int* size)
{
	int	i;
	int arr_index;
	int	length;
	int	*arr;

	length = ft_strlen(args);
	arr = (int *) malloc(INT_SIZE * (length / 2));
	i = 0;
	arr_index = 0;
	while (i < length)
	{
		if(args[i] == ' ')
		{
			i++;
			continue;
		}
		arr[arr_index] = args[i] - '0';
		arr_index++;
		i++;
	}

	*size = (arr_index / 4);
	return (arr);
}
