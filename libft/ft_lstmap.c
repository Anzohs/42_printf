/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:24:26 by hladeiro          #+#    #+#             */
/*   Updated: 2024/04/15 19:56:50 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_clean_list(t_list *list, void (*del)(void *))
{
	while (list)
	{
		ft_lstclear(&list, del);
	}
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*list_t;

	if (!lst || !f || !del)
		return (NULL);
	new_list = ft_lstnew(f(lst->content));
	if (!new_list)
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		list_t = ft_lstnew(f(lst->content));
		if(!list_t)
			return (ft_clean_list(new_list, del));
		ft_lstadd_back(&new_list, list_t);
		ft_lstclear(&list_t, del);
		lst = lst->next;
	}
	return (new_list);
}
