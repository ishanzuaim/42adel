/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:18:57 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/27 13:00:34 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

void	ft_putarr(char **str, int size)
{
	while (size--)
	{
		ft_putstr(*str);
		str++;
	}
}

int	ft_strcmp(char *src, char *dest)
{
	while (*src && *dest && *src == *dest)
	{
		src++;
		dest++;
	}
	return (*src - *dest);
}

void	ft_sort(char **argv, int size)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(argv[j], argv[i]) < 0)
			{
				temp = argv[j];
				argv[j] = argv[i];
				argv[i] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	argv ++;
	ft_sort(argv, argc - 1);
	ft_putarr(argv, argc - 1);
}
