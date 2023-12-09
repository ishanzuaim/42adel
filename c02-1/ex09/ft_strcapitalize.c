/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 09:01:43 by izuaim            #+#    #+#             */
/*   Updated: 2023/11/19 15:22:21 by izuaim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_alphanumeric(char x)
{
	if (x >= 'A' && x <= 'Z')
		return (1);
	if (x >= 'a' && x <= 'z')
		return (1);
	if (x >= '0' && x <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	set_caps;

	i = 0;
	set_caps = 1;
	while (str[i] != '\0')
	{
		if (set_caps)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			set_caps = 0;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
		if (!is_alphanumeric(str[i]))
			set_caps = 1;
		i++;
	}
	return (str);
}

/*
int main()
{
	char str[] = "salut,   comMent tU vAs ? 42Mots qUE-de;x; cin\\uante+et+-!$un";
	printf("old: %s\n", str); 
   	printf("new: %s\n", ft_strcapitalize(str));

	char str2[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("old: %s\n", str2); 
   	printf("new: %s\n", ft_strcapitalize(str2));
}
*/
