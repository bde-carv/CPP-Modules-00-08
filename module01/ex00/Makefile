# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/09 18:39:40 by bde-carv          #+#    #+#              #
#    Updated: 2022/12/13 18:13:48 by bde-carv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

CC = c++
CFLAGS = -Wall -Werror -Wextra -fsanitize=address
SRC = main.cpp \
		newZombie.cpp \
		randomChump.cpp \
		zombie.cpp \

RM = rm -f
.PHONY = all clean re

all: $(NAME)

$(NAME): $(SRC)
		$(CC) $(CFLAGS) $(SRC) -o $@

clean:
		$(RM) $(NAME)

re: clean all
