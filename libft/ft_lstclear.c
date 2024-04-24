/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 18:34:57 by hladeiro          #+#    #+#             */
/*   Updated: 2024/04/15 19:53:30 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*list_temp;

	if (!*lst || !del)
		return ;
	while (*lst)
	{
		del(lst[0]->content);
		list_temp = lst[0]->next;
		free(lst);
		*lst = list_temp;
	}
	*lst = NULL;
}
