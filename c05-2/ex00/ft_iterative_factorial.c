/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:33:40 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/22 17:47:31 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	count;

	if (nb < 0)
		return (0);
	i = 1;
	count = 1;
	while (i <= nb)
	{
		count *= i;
		i++;
	}
	return (count);
}

/*
int main()
{
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(1));
	printf("%d\n", ft_iterative_factorial(2));
	printf("%d\n", ft_iterative_factorial(6));
}
*/
