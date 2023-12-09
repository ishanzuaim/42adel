/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:37:54 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/27 13:37:31 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	long	i;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	i = 2;
	while ((i * i) <= nb)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 0)
		nb = 2;
	if (ft_is_prime(nb))
		return (nb);
	return (ft_find_next_prime(nb + 1));
}

/*
int main() {
	printf("-10 - %d\n", ft_find_next_prime(-2146483647));
	printf("-10 - %d\n", ft_find_next_prime(-10));
	printf("13 - %d\n", ft_find_next_prime(13));
	printf("14 - %d\n", ft_find_next_prime(14));
	printf("2 - %d\n", ft_find_next_prime(2));
	printf("4 - %d\n", ft_find_next_prime(4));
	printf("8 - %d\n", ft_find_next_prime(8));
	printf("20000000 - %d\n", ft_find_next_prime(20000000));
	printf("2146483647 - %d\n", ft_find_next_prime(2146483647));
}
*/
