# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/13 19:18:50 by bde-carv          #+#    #+#              #
#    Updated: 2022/12/18 19:47:39 by bde-carv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie_horde

CC = c++
CFLAGS = -Wall -Werror -Wextra -fsanitize=address -std=c++98
SRC = main.cpp \
		zombie.cpp \
		zombieHorde.cpp \

RM = rm -f
.PHONY = all clean re

all: $(NAME)

$(NAME): $(SRC)
		$(CC) $(CFLAGS) $(SRC) -o $@

clean:
		$(RM) $(NAME)

re: clean all