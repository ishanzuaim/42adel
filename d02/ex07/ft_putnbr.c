/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:07:28 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/15 18:37:12 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int num_chars(int x) {
	int i;

	if(x == 0) {
		return 1;
	}

	i = 1;
	int count = 0;
	while((x / i) != 0) {
		i*=10;
		count++;
	}
	return count;
}
void ft_putnbr(int nb) {
	int x;
	int temp;	
}

int main() {
	printf("%d\n", num_chars(102));
}
