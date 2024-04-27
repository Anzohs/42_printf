/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:37:19 by hladeiro          #+#    #+#             */
/*   Updated: 2024/04/27 17:06:07 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_write_base16(int i, char *base)
{
    if (i > 16)
    {
        ft_write_base16((i / 16), base);
        ft_putchar_fd(base[i % 16], 1);
    }
    else
        ft_putchar_fd(base[i], 1);
    
}

void ft_write_number (unsigned int n)
{
    if (n > 9)
    {
        ft_write_number(n / 10);
        ft_putchar_fd((n % 10) + '0', 1);
    }
	else
    	ft_putchar_fd((n % 10) + ('0'), 1);
}


void    ft_functions (unsigned int i)
{
    unsigned int    j;

    j = i;

    if (j >= 10)
        ft_write_number(j);
    else
        ft_putchar_fd(j + ('0'), 1);
}

static int	ft_check_flags(const char c, va_list *list)
{
	//int	i;

	if (c == 's')
		ft_putstr_fd(va_arg(*list, char *), 1);
	if (c == 'd' || c == 'i')
		ft_putnbr_fd(va_arg(*list, int), 1);
	if (c == '%')
		ft_putchar_fd('%', 1);
	if (c == 'c')
		ft_putchar_fd(va_arg(*list, int), 1);
	if (c == 'p')
		ft_functions(va_arg(*list, unsigned int));
	if (c == 'u')
		ft_functions(va_arg(*list, unsigned int));
	if (c == 'x')
		ft_write_base16(va_arg(*list, int), "0123456789abcdef");
	if (c == 'X')
		ft_write_base16(va_arg(*list, int), "0123456789ABCDEF");
	return (0);
}

int	ft_printf(const char *string, ...)
{
	va_list	list_args;
	int	print_c;

	va_start(list_args, string);
	print_c =0;
	while (*string)
	{
		if (*string == '%')
		{
			print_c += ft_check_flags(*(string + 1), &list_args);
			string ++;
		}
		else
			ft_putchar_fd(*string, 1);
		string++;
		print_c++;
	}
	va_end(list_args);
	return (print_c);
}

int	main() {}
