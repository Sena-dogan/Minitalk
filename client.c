/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: z.sena <z.sena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:46:47 by z.sena            #+#    #+#             */
/*   Updated: 2023/02/07 20:43:09 by z.sena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_convert(char x, int pid)
{
	int	i;

	i = 8;
	while (i--)
	{
		if ((x >> i) & 0x01)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(150);
	}
}

int	main(int argc, char **argv)
{
	char	*message;
	int		i;

	i = 0;
	if (argc == 3)
	{
		message = argv[2];
		while (message[i])
		{
			ft_convert(message[i], ft_atoi(argv[1]));
			i++;
		}
		if (*message)
			ft_convert('\n', ft_atoi(argv[1]));
	}
	else
		ft_printf("Wrong! Try Again\n");
	return (0);
}
