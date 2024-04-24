/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:57:53 by hladeiro          #+#    #+#             */
/*   Updated: 2024/04/12 19:53:36 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	sd;

	i = 0;
	sd = ft_strlen(dst);
	if (!size || sd >= size)
		return (ft_strlen(src) + size);
	while (*dst)
		dst++;
	while (i < size - sd - 1 && src[i])
	{
		*dst = src[i];
		dst++;
		i++;
	}
	*dst = '\0';
	return (sd + ft_strlen(src));
}
