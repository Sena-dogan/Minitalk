/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdogan <zdogan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 23:09:26 by zdogan            #+#    #+#             */
/*   Updated: 2022/07/26 16:11:00 by zdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	x;
	size_t	dlen;
	char	*dest;

	if (!s1 || !s2)
		return (NULL);
	dlen = (ft_strlen(s1) + ft_strlen(s2));
	dest = (char *) malloc(dlen + 1);
	if (!dest)
		return (NULL);
	i = 0;
	x = 0;
	while (s1[i])
		dest[x++] = s1[i++];
	i = 0;
	while (s2[i])
		dest[x++] = s2[i++];
	dest[dlen] = '\0';
	return (dest);
}
