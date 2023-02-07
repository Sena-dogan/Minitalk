/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdogan <zdogan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 01:38:55 by zdogan            #+#    #+#             */
/*   Updated: 2022/08/29 22:54:02 by zdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_flagcontrol(char c, va_list ap)
{
	int	x;

	x = 0;
	if (c == 'x' || c == 'X' )
		x += ft_hex(va_arg(ap, unsigned int), c);
	else if (c == 'c')
		x += ft_putchar(va_arg(ap, int));
	else if (c == 'd' || c == 'i')
		x += ft_putint(va_arg(ap, int), "0123456789");
	else if (c == 's')
		x += ft_putstr(va_arg(ap, char *));
	else if (c == 'p')
	{
		x += ft_putstr("0x");
		x += ft_hex(va_arg(ap, unsigned long long), c);
	}
	else if (c == 'u')
		x += ft_putunsigned(va_arg(ap, unsigned int), "0123456789");
	else if (c == '%')
		x += ft_putchar('%');
	return (x);
}

int	ft_printf(const char *str, ...)
{
	int		x;
	int		i;
	va_list	ap;

	x = 0;
	i = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			x += ft_flagcontrol(str[i], ap);
			i++;
		}
		else
		{
			x += ft_putchar(str[i]);
			i++;
		}
	}
	va_end(ap);
	return (x);
}
