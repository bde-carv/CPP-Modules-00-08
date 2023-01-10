# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/07 18:24:48 by bde-carv          #+#    #+#              #
#    Updated: 2023/01/10 19:10:44 by bde-carv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Module5_1

CC = clang++
CFLAGS = -Wall -Werror -Wextra -fsanitize=address -std=c++98
SRC = Bureaucrat.cpp \
		Form.cpp \
		main.cpp

RM = rm -f
.PHONY = all clean re

all: $(NAME)

$(NAME): $(SRC)
		$(CC) $(CFLAGS) $(SRC) -o $@

clean:
		$(RM) $(NAME)

re: clean all