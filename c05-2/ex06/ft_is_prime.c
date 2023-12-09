/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:10:14 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/24 10:40:23 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	curr;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	curr = nb - 1;
	while (curr > 1)
	{
		if (nb % curr == 0)
			return (0);
		curr--;
	}
	return (1);
}

/*
int main()
{
	int i = -10;
	while (i < 100) {
		if(ft_is_prime(i))
			printf("%d, ", i);
		i++;
	}
}
*/
