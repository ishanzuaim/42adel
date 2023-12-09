/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:52:05 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/17 10:38:00 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		temp;

	i = 0;
	while (i != size)
	{
		if (i >= size / 2)
		{
			return ;
		}
		temp = tab[size - i - 1];
		tab[size - i - 1] = tab[i];
		tab[i] = temp;
		i++;
	}
}
/*
void	print_arr(int *tab, int size)
{
	int i = 0;
	while(i < size) {
		char c = tab[i] + '0';
		write(1, &c, 1);
		i++;
	}
}

int main() {
	int tab[2] = {5, 1};
	ft_rev_int_tab(tab, 2);
	print_arr(tab, 2);
}
*/
