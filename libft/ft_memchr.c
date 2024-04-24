/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 23:22:12 by hladeiro          #+#    #+#             */
/*   Updated: 2024/04/16 16:08:49 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	l;

	p = (unsigned char *) s;
	l = (unsigned char) c;
	if (!n)
		return (NULL);
	while (p && --n > 0 && *p != l)
		p++;
	if (*p != l)
		return (NULL);
	return (p);
}
