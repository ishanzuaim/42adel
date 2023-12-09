#include <stdlib.h>

int	ft_strlen(char *x)
{
	int	i;

	i = 0;
	while (x[i])
		i++;

	return (i);
}

int	pow_n(int n, int i)
{
	int	count;
	int	amt;

	count = 0;
	amt = 1;
	while(count < i)
	{
		amt*=n;
		count++;
	}
	return (amt);
}

int	num_len(int n, int base)
{
	int	count;

	count = 1;
	while(n > base)
	{
		n /= base;
		count ++;
	}
	return (count);
}

int get_num_base(char c)
{
	char *x;
	int	i;

	x = "0123456789abcdef";
	i = 0;	
	while (i < 16)
	{
		if(c == x[i])
			return (i);
		i++;
	}
	return (-1);
}

#include <stdio.h>
int	base_to_ten(char *base_from, char *nbr)
{
	int	base;
	int	num_len;
	int	count;	
	int	i;

	count = 0;
	base = ft_strlen(base_from);	
	num_len = ft_strlen(nbr);
	i = 0;
	while (i < num_len)
	{
		count += (pow_n(base, i) * get_num_base(nbr[(num_len - 1) - i]));
		i++;
	}
	return (count);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char *word;
	int	length;
	int	base;
	int	base_ten;
	int	i;
	int hi;
	
	base_ten = base_to_ten(base_from, nbr);	
	base = ft_strlen(base_to);
	length = num_len(base_ten, base);
	word = malloc(sizeof(char) * (length + 1));
	word[length] = '\0';
	i = length - 1;
	while (base_ten > base)
	{
		word[i] = base_to[(base_ten % base)];
		i--;
		base_ten /= base;
	}
	word[i] = base_to[base_ten];
	return (word);
}

int	main()
{
	printf("%s\n", ft_convert_base("7d", "0123456789abcdef", "01"));
}
