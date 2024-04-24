/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:21:31 by hladeiro          #+#    #+#             */
/*   Updated: 2024/04/11 19:21:33 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*g;
	unsigned char	*h;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	g = (unsigned char *) src;
	h = (unsigned char *) dest;
	if (h > g)
	{
		while (n--)
			h[n] = g[n];
	}
	else
	{
		i = -1;
		while (++i < n)
			h[i] = g[i];
	}
	return (dest);
}
