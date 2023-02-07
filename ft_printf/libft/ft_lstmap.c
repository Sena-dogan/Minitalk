/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdogan <zdogan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 04:52:05 by zdogan            #+#    #+#             */
/*   Updated: 2022/07/26 16:08:44 by zdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	t_list	*iter;
	t_list	*newlist;

	if (!lst)
		return (NULL);
	newlist = 0;
	while (lst)
	{
		iter = ft_lstnew(f(lst -> content));
		if (!iter)
		{
			ft_lstclear (&newlist, del);
			return (NULL);
		}
		ft_lstadd_back (&newlist, iter);
		lst = lst -> next;
	}
	return (newlist);
}
