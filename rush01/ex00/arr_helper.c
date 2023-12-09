/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_helper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 10:10:35 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/26 17:15:24 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all_headers.h"
#include <stdlib.h>

#define INT_SIZE 4

void	print_int_array(int	*arr, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		ft_putchar(arr[i] + '0');
		i++;
	}
}

int *create_and_copy_array(int* arr, int size)
{
	int	i;
	int *new_arr;

	new_arr = (int *) malloc(INT_SIZE * size);
	i = 0;
	while (i < size)
	{
		new_arr[i] = arr[i];
		i++;
	}

	return arr;
}

int	**create_matrix_with_new_row(int **matrix, int* arr, int index, int size)
{
	int **new_matrix = malloc(sizeof(int *) * size);
	int	i = 0;
	int	j = 0;
	while (matrix && i < index)
	{
		new_matrix[i] = create_and_copy_array(matrix[i], size);
		i++;
	}	

	new_matrix[i] = create_and_copy_array(arr, size);

	return (matrix);
}
