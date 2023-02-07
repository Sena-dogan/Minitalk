/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdogan <zdogan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 00:39:01 by zdogan            #+#    #+#             */
/*   Updated: 2022/07/26 16:11:48 by zdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	x;

	x = (unsigned char)c;
	len = ft_strlen((char *)(&s[0]));
	if (x == '\0')
		return ((char *)(&s[len]));
	while (--len >= 0)
		if (s[len] == x)
			return ((char *)(&s[len]));
	return (NULL);
}
