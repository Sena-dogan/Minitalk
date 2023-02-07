# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: z.sena <z.sena@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/07 17:46:02 by z.sena            #+#    #+#              #
#    Updated: 2023/02/07 22:12:38 by z.sena           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
CLIENT = client
SERVER = server

CLIENT_SRC = client.c
SERVER_SRC = server.c

CLIENT_OBJ = $(CLIENT_SRC:.c=.o)
SERVER_OBJ = $(SERVER_SRC:.c=.o)

PRINTF_AR = ft_printf/libftprintf.a

all: $(NAME)

$(NAME): $(CLIENT_OBJ) $(SERVER_OBJ)
	@make -C ft_printf
	@ar rc $(NAME) $(CLIENT_OBJ) $(SERVER_OBJ) $(PRINTF_AR)
	@ranlib $(NAME)
	@$(CC) $(CFLAGS) $(CLIENT_OBJ) $(PRINTF_AR) -o $(CLIENT)
	@$(CC) $(CFLAGS) $(SERVER_OBJ) $(PRINTF_AR) -o $(SERVER)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	@make clean -C ft_printf
	@rm -f $(CLIENT_OBJ) $(SERVER_OBJ)

fclean: clean
	@make fclean -C ft_printf
	@rm -f $(NAME) $(CLIENT) $(SERVER)

re: fclean all

.PHONY: all clean fclean re