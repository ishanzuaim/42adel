/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:22:25 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/29 16:50:36 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
}

int	get_len(char **str, char *sep, int size)
{
	int	i;
	int	count;

	if (size == 0)
		return (0);
	i = 0;
	count = 0;
	while (i < size)
	{
		count += ft_strlen(str[i]);
		i++;
	}
	count += ((size - 1) * ft_strlen(sep));
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		index;
	char	*str;

	str = malloc(sizeof(char) * (get_len(strs, sep, size) + 1));
	i = 0;
	index = 0;
	while (i < size)
	{
		ft_strcpy(str + index, strs[i]);
		index += ft_strlen(strs[i]);
		i++;
		if (i != size)
		{
			ft_strcpy(str + index, sep);
			index += ft_strlen(sep);
		}
	}
	str[index] = '\0';
	return (str);
}

/*
int	main()
{
	char	*array[] = {
		"First",
		"Second",
		"Third",
	};
	printf("%s\n", ft_strjoin(3, array, "; "));
}
*/
