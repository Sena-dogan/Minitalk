/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdogan <zdogan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 03:40:32 by zdogan            #+#    #+#             */
/*   Updated: 2022/07/06 16:52:03 by zdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		size;
	char	*str;

	size = ft_strlen((char *)s);
	str = malloc((size + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, s, size);
	str[size] = '\0';
	return (str);
}
