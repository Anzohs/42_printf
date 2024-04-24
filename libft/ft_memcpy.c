/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:22:55 by hladeiro          #+#    #+#             */
/*   Updated: 2024/04/11 19:36:23 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*pt;

	if (!src && !dest)
		return (dest);
	ptr = (unsigned char *) dest;
	pt = (unsigned char *) src;
	while (n)
	{
		*ptr = *pt;
		ptr++;
		pt++;
		n--;
	}
	return (dest);
}
