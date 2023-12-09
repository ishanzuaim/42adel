/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_util.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 19:03:00 by shulee            #+#    #+#             */
/*   Updated: 2023/12/03 19:03:05 by shulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i ++ ;
	}
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i ++ ;
	}
	dest[i] = '\0';
}

int	ft_strcmp(char *s1, char*s2)
{
	int	index;

	index = 0;
	while (s1[index] && s2[index])
	{
		if (s1[index] > s2[index])
			return (1);
		else if (s1[index] < s2[index])
			return (-1);
		index ++ ;
	}
	if (ft_strlen(s1) > ft_strlen(s2))
		return (1);
	else if (ft_strlen(s1) < ft_strlen(s2))
		return (-1);
	else
		return (0);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i1;
	int	i2;

	i1 = 0;
	while (dest[i1])
		i1 ++ ;
	i2 = 0;
	while (src[i2])
	{
		dest[i1] = src[i2];
		i1 ++ ;
		i2 ++ ;
	}
	dest[i1] = '\0';
	return (dest);
}

int	ft_atoi(char *str)
{
	int	i;
	int	num;

	num = 0;
	i = ft_strlen(str) - 1;
	while (i >= 0 && str[i] >= '0' && str[i] <= '9')
	{
		num *= 10;
		num += (str[i] - '0');
		i--;
	}
	return (num);
}
