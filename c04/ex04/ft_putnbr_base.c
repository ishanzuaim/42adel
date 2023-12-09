/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:38:51 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/21 18:31:08 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_base_x(char* base, char* x)
{
	i = 0;
	while (base[i] != '\0')
	{
		if(base[i] != x[i])
			return 0;
		i++;
	}
	return 1;
}

int is_base_2(char *base)
{


void	ft_putnbr_base(int nbr, char *base)
{
	if(is_base_10(base))
		return nbr;

	

}
