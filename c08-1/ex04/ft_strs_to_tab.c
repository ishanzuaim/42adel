/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:40:49 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/30 18:23:05 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*new_src;

	new_src = (char *) malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!new_src)
		return (NULL);
	ft_strcpy(new_src, src);
	return (new_src);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	char		*copy;
	t_stock_str	*stock_str;

	stock_str = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!stock_str)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		copy = ft_strdup(av[i]);
		if (!copy)
			return (NULL);
		stock_str[i].size = ft_strlen(av[i]);
		stock_str[i].str = av[i];
		stock_str[i].copy = copy;
		i++;
	}
	stock_str[i].str = 0;
	stock_str[i].size = 0;
	stock_str[i].copy = 0;
	return (stock_str);
}
