/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdogan <zdogan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 09:19:57 by zdogan            #+#    #+#             */
/*   Updated: 2022/07/26 16:09:07 by zdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	a;
	size_t			i;

	str = (unsigned char *)s;
	a = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == a)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}
