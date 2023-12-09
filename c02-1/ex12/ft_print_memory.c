/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 10:45:17 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/19 16:08:29 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	get_hex(int num)
{
	char	*hex;

	hex = "0123456789abcdef";
	return (hex[num]);
}

void	print_addr_to_hex(void *addr)
{
	int		i;
	int		int_addr;
	char	hex[16];

	int_addr = (int) addr;
	i = 0;
	while (i < 16)
	{
		hex[15 - i] = get_hex(int_addr & 15);
		int_addr >>= 4;
		i++;
	}
	write(1, hex, 16);
	write(1, ":", 1);
}

void	print_string_to_hex_16(void *addr, int size_left)
{
	int		i;
	char	*str;
	char	hex[2];

	str = (char *)addr;
	i = 0;
	while (i < 16 && i < size_left)
	{
		if (i % 2 == 0)
			write(1, " ", 1);
		hex[0] = get_hex(str[i] >> 4);
		hex[1] = get_hex(str[i] & 0x0f);
		write(1, hex, 2);
		i++;
	}
	while (i < 16)
	{
		if (i % 2 == 0)
			write(1, " ", 1);
		write(1, "  ", 2);
		i++;
	}
	write(1, " ", 1);
}

void	print_string_16(void *addr, int size_left)
{
	int		i;
	char	*str;

	str = (char *) addr;
	i = 0;
	while (i < 16 && i < size_left)
	{
		if (str[i] >= ' ' && str[i] <= '~')
			write(1, str + i, 1);
		else
			write(1, ".", 1);
		i++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char			*str;
	unsigned int	i;

	if (size == 0)
		return (addr);
	str = (char *) addr;
	i = 0;
	while (i < size)
	{
		if (i % 16 == 0)
		{
			print_addr_to_hex(str + i);
			print_string_to_hex_16((str + i), size - i);
			print_string_16((str + i), size - i);
		}
		i++;
	}
	return (addr);
}
/**
int main() 
{
	ft_print_memory("Bonjour les ah\x0a\x09 \nc\'est pe\0t i\x00nx \n", 35);
	ft_print_memory("Bonjour les es\x09\x0a\x09 \nc\'est peut i\x00 \n", 0);
}
*/
