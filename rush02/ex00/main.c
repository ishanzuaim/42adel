/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 10:31:59 by izuaim            #+#    #+#             */
/*   Updated: 2023/12/03 18:39:48 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	free_numbers(char **numbers)
{
	int			i;

	i = 0;
	while (numbers[i])
	{
		free(numbers[i]);
		i++;
	}
	free(numbers);
}

int	main(int argc, char *argv[])
{
	char		**numbers;

	if (!(validate_input(argc, argv)))
		return (0);
	if (argc == 2)
	{
		numbers = file_reader("numbers.dict");
		if (numbers == NULL)
			return (0);
		convert_to_num(argv[1], numbers);
	}
	else
	{
		numbers = file_reader(argv[1]);
		if (numbers == NULL)
			return (0);
		convert_to_num(argv[2], numbers);
	}
	free_numbers(numbers);
	return (0);
}
