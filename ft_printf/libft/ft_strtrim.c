/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdogan <zdogan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:48:18 by zdogan            #+#    #+#             */
/*   Updated: 2022/07/26 16:11:55 by zdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (0);
	i = 0;
	j = ft_strlen((char *) s1);
	while (ft_strchr(set, s1[i]) && s1[i] != '\0')
		i++;
	while (ft_strchr(set, s1[j]) && j != '\0')
		j--;
	if ((int)(j - i + 1) <= 0)
		return (ft_calloc(1, 1));
	return (ft_substr(s1, i, (j - i) + 1));
}
