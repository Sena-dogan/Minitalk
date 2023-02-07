/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: z.sena <z.sena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:45:59 by z.sena            #+#    #+#             */
/*   Updated: 2023/02/07 22:27:38 by z.sena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include "ft_printf/ft_printf.h"
# include <signal.h>
# include <stdlib.h>

void    ft_convert(char x, int pid);
void    signal_handler(int signal);

#endif