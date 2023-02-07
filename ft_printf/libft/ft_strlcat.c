/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdogan <zdogan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 22:18:26 by zdogan            #+#    #+#             */
/*   Updated: 2022/07/26 15:42:01 by zdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	x;
	size_t	y;
	size_t	slen;
	size_t	dlen;

	x = 0;
	y = 0;
	while (dest[y] != '\0')
		y++;
	dlen = y;
	slen = ft_strlen(src);
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src[x] != '\0' && x < size - dlen - 1)
	{
		dest[y] = src[x];
		x++;
		y++;
	}
	dest[y] = '\0';
	return (dlen + slen);
}
