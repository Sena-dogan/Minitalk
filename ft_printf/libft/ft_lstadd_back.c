/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdogan <zdogan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 02:51:22 by zdogan            #+#    #+#             */
/*   Updated: 2022/07/26 16:07:35 by zdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*final;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	final = ft_lstlast(*(lst));
	final->next = new;
}
