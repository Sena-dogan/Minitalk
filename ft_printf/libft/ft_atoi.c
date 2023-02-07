/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdogan <zdogan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 03:47:21 by zdogan            #+#    #+#             */
/*   Updated: 2022/07/26 16:06:00 by zdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				neg;
	long long int	res;

	neg = 1;
	res = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v' \
			|| *str == '\f' || *str == '\r')
			str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		res = res * 10 + *str - 48;
		if (res * neg > 2147483647)
			return (-1);
		if (res * neg < -2147483648)
			return (0);
		str++;
	}
	return ((int)(res * neg));
}
