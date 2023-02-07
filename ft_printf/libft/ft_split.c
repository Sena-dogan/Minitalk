/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdogan <zdogan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 17:01:53 by zdogan            #+#    #+#             */
/*   Updated: 2022/07/26 16:10:10 by zdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordcounter(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s == '\0')
			return (i);
		while (*s != c && *s)
			s++;
		i++;
	}
	return (i);
}

static int	charcounter(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s && (*s != c))
	{
		i++;
		s++;
	}
	return (i);
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	int		resi;

	if (!s)
		return (0);
	resi = 0;
	res = malloc (sizeof(char *) * wordcounter(s, c) + 1);
	if (!res)
		return (0);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s == '\0')
			break ;
		res[resi] = ft_substr(s, 0, charcounter(s, c));
		resi++;
		s = s + charcounter(s, c);
	}
	res[resi] = NULL;
	return (res);
}
