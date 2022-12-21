# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/09 18:39:40 by bde-carv          #+#    #+#              #
#    Updated: 2022/12/21 17:39:51 by bde-carv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed_anotha

CC = clang++
CFLAGS = -Wall -Werror -Wextra -fsanitize=address
SRC = Fixed.cpp \
		main.cpp

RM = rm -f
.PHONY = all clean re

all: $(NAME)

$(NAME): $(SRC)
		$(CC) $(CFLAGS) $(SRC) -o $@

clean:
		$(RM) $(NAME)

re: clean all
