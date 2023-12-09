/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:42:01 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/30 18:22:02 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

int	pow_10(int n)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (i < n)
	{
		count *= 10;
		i++;
	}
	return (count);
}

int	num_length(int n)
{
	int	i;

	i = 1;
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

void	ft_putnbr(int nb)
{
	char	n;
	int		i;
	int		length;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	i = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	length = num_length(nb);
	while (i < length)
	{
		n = (nb / pow_10(length - i - 1)) % 10;
		n += '0';
		write(1, &n, 1);
		i++;
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, str + i, 1);
		i++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	if (!par)
		return ;
	while (par->str)
	{
		ft_putstr(par->str);
		ft_putstr("\n");
		ft_putnbr(par->size);
		ft_putstr("\n");
		ft_putstr(par->copy);
		ft_putstr("\n");
		par ++;
	}
}
