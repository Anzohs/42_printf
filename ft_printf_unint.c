#include "ft_printf.h"
#include <stdio.h>

static int 	ft_un_len(unsigned int c)
{
	int	i;

	i = 0;
	if (c >= 10)
	{
		i++;
		c = c / 10;
	}
	return (i + 1);
}

static char	*ft_unitoa(unsigned int n)
{
	char	*itoa;
	int	i;

	i = ft_un_len(n) + 1;
	itoa = ft_calloc(i, sizeof(char));
	if (!itoa)
		return (NULL);
	itoa[--i] = '\0';
	while (n > 9)
	{
		itoa[--i] = (n % 10) + '0';
		n /= 10;
	}
	itoa[--i] = n + '0';
	return (itoa);
}


int	ft_printf_unint(unsigned int c)
{
	char	*p;
	int	i;

	i = 0;
	p = ft_unitoa(c);
	if (!p)
		return (i);
	while(p[i])
	{
		ft_putchar_fd(p[i], 1);
		i++;
	}
	free(p);
	return (i + 1);
}