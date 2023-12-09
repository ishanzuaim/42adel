/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:18:11 by izuaim            #+#    #+#             */
/*   Updated: 2023/12/09 10:54:39 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_digits(int first_digit, int second_digit, int third_digit)
{
	char	c;

	c = third_digit + '0';
	write(1, &c, 1);
	c = second_digit + '0';
	write(1, &c, 1);
	c = first_digit + '0';
	write(1, &c, 1);
	if (third_digit == 7 && second_digit == 8 && first_digit == 9)
	{
		return ;
	}
	write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int		first_digit;
	int		second_digit;
	int		third_digit;

	third_digit = 0;
	while (third_digit <= 7)
	{
		second_digit = third_digit + 1;
		while (second_digit <= 8)
		{
			if (second_digit == third_digit)
			{
				second_digit++;
				continue ;
			}
			first_digit = second_digit + 1;
			while (first_digit <= 9)
			{
				print_digits(first_digit, second_digit, third_digit);
				first_digit ++;
			}
			second_digit++;
		}
		third_digit++;
	}
}
