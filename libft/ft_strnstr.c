/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:16:57 by hladeiro          #+#    #+#             */
/*   Updated: 2024/04/12 14:17:20 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*find_c(const char *big, const char *little, size_t len, int j)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	if (len > ft_strlen(big))
		len = ft_strlen(big);
	while (big[i] && i < (int)len && little[j])
	{
		if (big[i] == little[j])
		{
			k++;
			j++;
		}
		else
		{
			j = 0;
			i -= k;
			k = 0;
		}
		i++;
	}
	if (!little[j])
		return ((char *) big + (i - k));
	return (NULL);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;

	i = 0;
	if (!little && big)
		return ((char *) big);
	return (find_c(big, little, len, i));
}
