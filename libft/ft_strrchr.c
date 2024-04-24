/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:15:02 by hladeiro          #+#    #+#             */
/*   Updated: 2024/04/11 19:21:04 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strrchr(const char *s, int c)
{
	char	l;
	size_t	i;

	i = ft_strlen(s);
	l = c;
	while (i > 0)
	{
		if (s[i] == l)
			return ((char *)s + i);
		i--;
	}
	if (s[i] == l)
		return ((char *)s + i);
	return (NULL);
}
