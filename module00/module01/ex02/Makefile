# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/13 19:18:50 by bde-carv          #+#    #+#              #
#    Updated: 2022/12/14 18:31:07 by bde-carv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = hi_brain

CC = c++
CFLAGS = -Wall -Werror -Wextra -fsanitize=address
SRC = main.cpp \

RM = rm -f
.PHONY = all clean re

all: $(NAME)

$(NAME): $(SRC)
		$(CC) $(CFLAGS) $(SRC) -o $@

clean:
		$(RM) $(NAME)

re: clean all