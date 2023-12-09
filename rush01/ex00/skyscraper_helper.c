/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscraper_helper.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 08:56:03 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/26 16:27:27 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all_headers.h"
#include <stdlib.h>

int	is_valid(int x, int y, int *arr, int size)
{
	int tallest_skyscraper_so_far;
	int	count_from_left;
	int	count_from_right;
	int	i;
	int	index;

	tallest_skyscraper_so_far = 0;
	count_from_left = 0;
	i = 0;
	while (i < size)
	{
		if (arr[i] > tallest_skyscraper_so_far)
		{
			count_from_left++;
			tallest_skyscraper_so_far = arr[i];
		}
		i++;
	}
	
	i = 0;
	count_from_right = 0;
	while (i < size)
	{
		index = size - 1 - i;
		if (arr[size] > tallest_skyscraper_so_far)
		{
			count_from_right++;
			tallest_skyscraper_so_far = arr[size];
		}
		i++;
	}
	
	return  (count_from_left == x && count_from_right == y);
}
