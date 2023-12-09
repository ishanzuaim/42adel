/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:16:47 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/29 16:52:22 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	index;

	if (min >= max)
		return (NULL);
	range = (int *)malloc(sizeof(int) * (max - min));
	if (!range)
		return (NULL);
	i = min;
	index = 0;
	while (i < max)
	{
		range[index++] = i;
		i++;
	}
	return (range);
}
/*
void print_array(int* arr, int size)
{
	if(!arr)
		return ;

	int	i = 0;
	while (i < size)
	{
		printf("%d, ", arr[i]);
		i++;
	}
	printf("\n");
}

int	main()
{
	print_array(ft_range(-5, 1), 6);	
	print_array(ft_range(5, 4), 100);	
}
*/
