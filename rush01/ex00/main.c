/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 08:51:54 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/26 18:14:28 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all_headers.h"

int	main(int argc, char *argv[])
{
	int		*edge_arr;

	if (argc != 2)
	{
		ft_putstr("Error\n");
		return 0;
	}

	//validate
	
	int size = 0;
	edge_arr = args_to_int_arr(argv[1], &size);
	run(edge_arr, size);
}
