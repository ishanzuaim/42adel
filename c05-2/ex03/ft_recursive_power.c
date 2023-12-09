/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:40:43 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/24 10:41:32 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*
int main() {
	printf("%d\n", ft_recursive_power(10, -1));
	printf("%d\n", ft_recursive_power(10, 2));
	printf("%d\n", ft_recursive_power(4, 3));
	printf("%d\n", ft_recursive_power(4, 1));
	printf("%d\n", ft_recursive_power(4, 0));
	printf("%d\n", ft_recursive_power(0, 0));
}
*/
