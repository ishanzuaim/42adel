/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:35:06 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/27 17:23:35 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	index;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (!(*range))
		return (-1);
	i = min;
	index = 0;
	while (i < max)
	{
		(*range)[index++] = i;
		i++;
	}
	return (index);
}

/*
void print_arr(int* arr, int size)
{
	int	i;
	if (!arr)
		return;
	
	i = 0;
	while (i < size)
	{
		printf("%d, ", arr[i]);
		i++;
	}
	printf("\n");
}

int	main()
{
	int *range;
	int *range_2;

	printf("%d\n", ft_ultimate_range(&range, -5, 4));
	printf("%d\n", ft_ultimate_range(&range_2, 5, 4));
	print_arr(range, 9);
	print_arr(range_2, 9);
}
*/
