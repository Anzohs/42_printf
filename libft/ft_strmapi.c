/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:21:55 by hladeiro          #+#    #+#             */
/*   Updated: 2024/04/11 22:48:13 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s);

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ptr;

	ptr = ft_strdup(s);
	if (!ptr)
		return (NULL);
	i = -1;
	while (ptr[++i])
		ptr[i] = f(i, ptr[i]);
	return (ptr);
}
