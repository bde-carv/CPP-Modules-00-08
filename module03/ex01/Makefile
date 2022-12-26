# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/09 18:39:40 by bde-carv          #+#    #+#              #
#    Updated: 2022/12/26 17:37:27 by bde-carv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap_1

CC = clang++
CFLAGS = -Wall -Werror -Wextra -fsanitize=address -std=c++98
SRC = ClapTrap.cpp \
		ScavTrap.cpp \
		main.cpp

RM = rm -f
.PHONY = all clean re

all: $(NAME)

$(NAME): $(SRC)
		$(CC) $(CFLAGS) $(SRC) -o $@

clean:
		$(RM) $(NAME)

re: clean all
