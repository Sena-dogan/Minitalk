/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdogan <zdogan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 08:54:45 by zdogan            #+#    #+#             */
/*   Updated: 2022/07/26 15:53:14 by zdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		start = ft_strlen(s);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	str = (char *)ft_calloc(sizeof(char), len + 1);
	if (!str || !s[start])
		return (str);
	while (len--)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	return (str);
}
