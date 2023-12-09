/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:21:16 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/23 16:57:31 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*
int	main()
{
	ft_putnbr(658307);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(-123);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
}
*/
