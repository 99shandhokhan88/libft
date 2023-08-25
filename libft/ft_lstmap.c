/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzashev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:10:42 by vzashev           #+#    #+#             */
/*   Updated: 2023/02/18 18:10:42 by vzashev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*new_list;

	if (!lst || !f || !del)
		return (NULL);
	current = ft_lstnew(f(lst->content));
	if (!current)
		return (NULL);
	new_list = current;
	lst = lst->next;
	while (lst != NULL)
	{
		current->next = ft_lstnew(f(lst->content));
		if (!current->next)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		current = current->next;
		lst = lst->next;
	}
	return (new_list);
}
