# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grwest <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/19 19:54:15 by grwest            #+#    #+#              #
#    Updated: 2020/02/20 19:25:42 by grwest           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
SRC := $(wildcard *.c)
OBJS =$(SRC:.c=.o)
FLAGS := -Wall -Werror -Wextra -I .

all:$(NAME)

$(NAME): $(SRC) libft.h
	gcc $(FLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
