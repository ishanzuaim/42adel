/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 09:42:29 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/24 10:09:24 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	check;

	check = 0;
	if (nb < 0)
		return (0);
	while (check <= nb && check <= 46340)
	{
		if (check * check == nb)
			return (check);
		check++;
	}
	return (0);
}

/*
int main()
{
	printf("%d\n", ft_sqrt(-1));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(2));
	printf("%d\n", ft_sqrt(519841));
	printf("%d\n", ft_sqrt(2147395600));
	printf("%d\n", ft_sqrt(2147483647));
}
*/
