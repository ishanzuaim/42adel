/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 09:55:44 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/19 10:43:57 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	print_hex(char c)
{
	char	hex[3];
	char	hex_str[17];

	ft_strcpy(hex_str, "0123456789abcdef");
	hex[0] = '\\';
	hex[1] = hex_str[(c >> 4) & 15];
	hex[2] = hex_str[c & 15];
	write(1, hex, 3);
}

void	ft_putstr_non_printable(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '~')
			write(1, str + i, 1);
		else
			print_hex(str[i]);
		i++;
	}
}

/*
int main()
{
	ft_putstr_non_printable("Coucou\ntu vas bi\02en ?");
}
*/
