/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 16:28:39 by sabrenda          #+#    #+#             */
/*   Updated: 2020/11/08 18:10:56 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*start;

	if (!lst || !f || !del)
		return (NULL);
	if (!(new = ft_lstnew(f(lst->content))))
	{
		return (NULL);
	}
	start = new;
	while (lst)
	{
		if (!(new->next = ft_lstnew(f(lst->next->content))))
		{
			ft_lstclear(&start, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&start, new);
	}
	return (start);
}
