/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:37:19 by hladeiro          #+#    #+#             */
/*   Updated: 2024/04/24 19:35:46 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"
#include <stdio.h>

static int	ft_check_flags(const char c, va_list list)
{
	int	i;

	if (c == 's')
		ft_putstr_fd(va_arg(list, char *), 1);
	if (c == 'd' || c == 'i')
		ft_putnbr_fd(va_arg(list, int), 1);
	if (c == '%')
		ft_putchar_fd('%', 1);
	if (c == 'c')
		ft_putchar_fd(va_arg(list, int), 1);
	if (c == 'p')
		return (0);
	if (c == 'u')
		return (0);
	if (c == 'x')
		return (0);
	if (c == 'X')
		return (0);
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
			print_c += ft_check_flags(*(string + 1), list_args);
			string ++;
		}
		else
			ft_putchar_fd(*string, 1);
		string++;
		print_c++;
	}
	ft_putendl_fd("", 1);
	va_end(list_args);
	return (print_c);
}

int	main(void)
{
	char	*string;
	
	string = "teste";
	ft_printf("Testing %s 123, %% %s, %s, %i, %c", string, "outra vez", "another test", -123, 'z');
}