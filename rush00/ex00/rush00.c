/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00-1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asarkar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:31:48 by asarkar           #+#    #+#             */
/*   Updated: 2023/11/19 20:23:16 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_line(char head, char m, char tail, int width)
{
	int	i;

	ft_putchar(head);
	i = 1;
	while (i < width - 1)
	{
		ft_putchar(m);
		i++;
	}
	if (width > 1)
	{
		ft_putchar(tail);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	if (x < 1 || y < 1)
	{
		write(1, "Invald input. Should be greater than 0.", 40);
		return ;
	}
	print_line('o', '-', 'o', x);
	while (i < y - 1)
	{
		print_line('|', ' ', '|', x);
		i++;
	}
	if (y > 1)
	{
		print_line('o', '-', 'o', x);
	}
}
