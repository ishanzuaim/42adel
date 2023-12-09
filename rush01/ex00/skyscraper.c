/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscraper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 08:54:45 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/26 18:35:49 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all_headers.h"

void branch_out(int* edges, int size, int **curr_state, int level)
{
	int **new_curr_state;
	int	**valid_inputs;
	
	if (level == size)
	{
		//is matrix valid
		return ;
	}

	int index = size * 2 + level;
	int valid_inp_size;
	valid_inputs = get_vals(edges[index], edges[index + 4], &valid_inp_size);
	int i = 0;
	while (i < valid_inp_size)
	{
		int** new_curr_state = create_matrix_with_new_row(curr_state, valid_inputs[i], i, size);			
		branch_out(edges, size, new_curr_state, level + 1);
		i++;
	}
}



void run(int *edges, int size)
{
	branch_out(edges, size, 0, 0);
}
