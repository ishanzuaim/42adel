/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:27:43 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/14 20:00:17 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = i + '0';
		write(1, &c, 1);
		i++;
	}
}
