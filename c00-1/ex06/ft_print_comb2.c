/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:40:57 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/15 18:18:11 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_number(int num)
{
	char	first_num;
	char	second_num;

	first_num = (num / 10) + '0';
	second_num = (num - ((num / 10) * 10)) + '0';
	write (1, &first_num, 1);
	write (1, &second_num, 1);
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = 0;
	while (i <= 98)
	{
		j = 0;
		while (j <= 99)
		{
			if (j > i)
			{
				print_number (i);
				write (1, " ", 1);
				print_number (j);
				if (i == 98 && j == 99)
				{
					break ;
				}
				write (1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}
