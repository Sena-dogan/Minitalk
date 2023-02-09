# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: z.sena <z.sena@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/09 16:16:26 by z.sena            #+#    #+#              #
#    Updated: 2023/02/09 16:16:29 by z.sena           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC=gcc
CFLAGS=-Wall -Wextra -Werror
printf= ft_printf/libftprintf.a

CLİENT = client
SERVER = server

all: skyline $(printf) $(SERVER) $(CLİENT) 

$(printf):
	@make -C ft_printf

$(SERVER): $(printf)
	$(CC) $(CFLAGS) server.c $(printf) -o server

$(CLİENT): $(printf)
	$(CC) $(CFLAGS) client.c $(printf) -o client

clean:
	rm -f *.o
	make clean -C ft_printf

fclean: clean
	make fclean -C ft_printf
	rm -f server client

skyline:
	@clear
	@echo "__ / ____ I ____ I ____ \\ __"
	@echo "(⭕⭕ \\ ...SKYLINE.../ ⭕⭕)"
	@echo "(\\ __ / ____________ \\ __ /)"
	@echo "I_Oo_I ____.......____l_oO_|"
	@echo 

re: fclean all

.PHONY: all clean fclean coffee re