/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:28:06 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/17 10:38:46 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_integer_table(int *tab, int size)
{
	int		i;
	int		j;
	int		temp;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[i])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
void print_arr(int arr[], int size) {
	int i = 0;
	while (i < size) {
		char c = arr[i] + '0';
		write(1, &c, 1); 
		i++;
    }
}


int main()
{
    int tab[] = {4, 5,1, 3, 2};
    ft_sort_integer_table(tab, 5);
	print_arr(tab, 5);
    return 0;
}
