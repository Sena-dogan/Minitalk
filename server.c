/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: z.sena <z.sena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:46:14 by z.sena            #+#    #+#             */
/*   Updated: 2023/02/07 19:42:10 by z.sena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	bit_shift(int sig)
{
	static int	i = 7;
	static char	c = 0;

	c += sig << i;
	if (i == 0)
	{
		i = 7;
		ft_printf("%c", c);
		c = 0;
	}
	else
		i--;
}

void	signal_handler(int signal)
{
	if (signal == SIGUSR1)
	{
		bit_shift(1);
	}
	else if (signal == SIGUSR2)
	{
		bit_shift(0);
	}
	else if (signal == SIGINT)
	{
		ft_printf("\nMaking exit. Au Revoir, Chérie..\n");
		exit(1);
	}
}

int	main(void)
{
	int	pid;

	signal(SIGUSR1, signal_handler);
	signal(SIGUSR2, signal_handler);
	signal(SIGINT, signal_handler);
	pid = getpid();
	ft_printf("Your pid is : %d\n", pid);
	while (42)
		pause();
}
