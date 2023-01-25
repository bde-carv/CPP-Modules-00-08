# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/07 18:24:48 by bde-carv          #+#    #+#              #
#    Updated: 2023/01/25 18:10:23 by bde-carv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Module8_2

CC = c++
CFLAGS = -Wall -Werror -Wextra -fsanitize=address -std=c++98
SRC = main.cpp \

RM = rm -f
.PHONY = all clean re

all: $(NAME)

$(NAME): $(SRC)
		$(CC) $(CFLAGS) $(SRC) -o $@

clean:
		$(RM) $(NAME)

re: clean all