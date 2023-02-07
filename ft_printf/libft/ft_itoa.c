/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdogan <zdogan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 17:23:50 by zdogan            #+#    #+#             */
/*   Updated: 2022/07/26 16:07:21 by zdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		tmp;
	int		i;

	i = 1;
	tmp = n;
	while (tmp && i++)
		tmp /= 10;
	str = (char *)malloc(sizeof(char) *((n < 0) + i + (n == 0)));
	if (!str)
		return (NULL);
	str += (n < 0) + i - 1 + (n == 0);
	*str = '\0';
	if (n == 0)
		*(--str) = '0';
	i = (n >= 0) * 2 - 1;
	while (n)
	{
		*(--str) = (n % (10 * i)) * i + '0';
		n /= 10;
	}
	if (i < 0)
		*(--str) = '-';
	return (str);
}
