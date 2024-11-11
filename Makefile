# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: laugusto <laugusto@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/10 13:27:01 by laugusto          #+#    #+#              #
#    Updated: 2024/11/10 21:11:24 by laugusto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 	libftprintf.a

SRC = 	ft_printf.c \
		ft_str.c \

OBJ = $(SRC:.c=.o)

CC = cc

CFLAGS = -Wall -Werror -Wextra

DEL = rm -rf

AR = ar -rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $@ $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(DEL) $(OBJ)

fclean: clean
	$(DEL) $(NAME)

re: fclean all

.PHONY: all clean fclean re