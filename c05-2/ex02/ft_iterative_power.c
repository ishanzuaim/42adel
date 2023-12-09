/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:55:37 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/22 17:56:33 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	count;

	if (power < 0)
		return (0);
	i = 0;
	count = 1;
	while (i < power)
	{
		count *= nb;
		i++;
	}
	return (count);
}

/*
int main() {
	printf("%d\n", ft_iterative_power(10, -1));
	printf("%d\n", ft_iterative_power(10, 2));
	printf("%d\n", ft_iterative_power(4, 3));
	printf("%d\n", ft_iterative_power(4, 1));
	printf("%d\n", ft_iterative_power(4, 0));
}
*/
