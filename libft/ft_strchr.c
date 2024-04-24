/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:22:18 by hladeiro          #+#    #+#             */
/*   Updated: 2024/04/11 19:28:24 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			l;

	i = 0;
	l = (char) c;
	while (s[i])
	{
		if (s[i] == l)
			return ((char *) s + i);
		i++;
	}
	if (s[i] == l)
		return ((char *) s + i);
	return (NULL);
}
