# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/13 19:18:50 by bde-carv          #+#    #+#              #
#    Updated: 2022/12/17 19:11:30 by bde-carv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harley

CC = c++
CFLAGS = -Wall -Werror -Wextra -fsanitize=address
SRC = main.cpp \
		Harl.cpp \

RM = rm -f
.PHONY = all clean re

all: $(NAME)

$(NAME): $(SRC)
		$(CC) $(CFLAGS) $(SRC) -o $@

clean:
		$(RM) $(NAME)

re: clean all