/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:03:30 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/27 13:10:22 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb < 1)
		return (1);
	return ((nb * ft_recursive_factorial(nb - 1)));
}
/*
int main() {
	printf("%d\n",ft_recursive_factorial(-1));
	printf("%d\n",ft_recursive_factorial(0));
	printf("%d\n",ft_recursive_factorial(1));
	printf("%d\n",ft_recursive_factorial(2));
	printf("%d\n",ft_recursive_factorial(3));
	printf("%d\n",ft_recursive_factorial(7));
}
*/
