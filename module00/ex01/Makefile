# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/11 19:17:45 by bde-carv          #+#    #+#              #
#    Updated: 2022/12/12 18:40:08 by bde-carv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC = clang++
CFLAGS = -Wall -Werror -Wextra -fsanitize=address
SRC	=	main.cpp \
		phonebook.cpp \
		phonebook_utils.cpp \

RM = rm -f
.PHONY = all clean re

all: $(NAME)

$(NAME): $(SRC)
		$(CC) $(CFLAGS) $(SRC) -o $@

clean:
		$(RM) $(NAME)
		
re: clean all