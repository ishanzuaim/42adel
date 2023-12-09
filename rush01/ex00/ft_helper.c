/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 08:59:03 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/26 11:01:01 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return length;
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str) {
	int length;

	length = ft_strlen(str);
	write(1, str, length);	
}

