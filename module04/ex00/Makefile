# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/03 19:52:55 by bde-carv          #+#    #+#              #
#    Updated: 2023/01/03 20:08:35 by bde-carv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal_0

CC = clang++
CFLAGS = -Wall -Werror -Wextra -fsanitize=address -std=c++98
SRC = Animal.cpp \
		Cat.cpp \
		Dog.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \
		main.cpp

RM = rm -f
.PHONY = all clean re

all: $(NAME)

$(NAME): $(SRC)
		$(CC) $(CFLAGS) $(SRC) -o $@

clean:
		$(RM) $(NAME)

re: clean all