# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grwest <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/19 19:54:15 by grwest            #+#    #+#              #
#    Updated: 2020/03/01 07:00:51 by grwest           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

TO_SRCS = ft_atoi.c ft_itoa.c ft_tolower.c ft_toupper.c

IS_SRCS = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		  ft_isblank.c

PUT_SRCS = ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c \
		   ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c

LST_SRCS = ft_lstadd.c ft_lstdel.c ft_lstiter.c ft_lstmap.c ft_lstsize.c \
		   ft_lstdelone.c ft_lstlast.c ft_lstnew.c

MEM_SRCS = ft_bzero.c ft_memalloc.c ft_memchr.c ft_memcpy.c ft_memmove.c \
		   ft_calloc.c ft_memccpy.c ft_memcmp.c ft_memdel.c ft_memset.c

STR_SRCS = ft_strcat.c ft_strcpy.c ft_striter.c ft_strlcpy.c ft_strncat.c \
		   ft_strnew.c ft_strstr.c ft_strchr.c ft_strdel.c ft_striteri.c \
		   ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strsub.c ft_strclr.c \
		   ft_strdup.c ft_strjoin.c ft_strmap.c ft_strncpy.c ft_strrchr.c \
		   ft_strtrim.c ft_strcmp.c ft_strequ.c ft_strlcat.c ft_strmapi.c \
		   ft_strnequ.c ft_strsplit.c

ALL_SRCS = $(TO_SRCS) $(IS_SRCS) $(PUT_SRCS) $(LST_SRCS) $(MEM_SRCS) $(STR_SRCS)

OBJS = $(ALL_SRCS:.c=.o)

CC = gcc -Wall -Werror -Wextra -I includes/ -c

all: $(NAME)

$(NAME):
	@mkdir objs
	@echo "\nObjects directory made\n"
	@echo "Making to_srcs objects..."
	@$(CC) $(addprefix srcs/to_srcs/,$(TO_SRCS))
	@echo "Making is_srcs objects..."
	@$(CC) $(addprefix srcs/is_srcs/,$(IS_SRCS))
	@echo "Making put_srcs objects..."
	@$(CC) $(addprefix srcs/put_srcs/,$(PUT_SRCS))
	@echo "Making lst_srcs objects..."
	@$(CC) $(addprefix srcs/lst_srcs/,$(LST_SRCS))
	@echo "Making mem_srcs objects..."
	@$(CC) $(addprefix srcs/mem_srcs/,$(MEM_SRCS))
	@echo "Making str_srcs objects..."
	@$(CC) $(addprefix srcs/str_srcs/,$(STR_SRCS))
	@mv $(OBJS) objs/
	@echo "\nObjects made\n"
	@echo "Making libft.a library..."
	@ar -rcs $(NAME) $(addprefix objs/,$(OBJS))
	@echo "\nLibrary made\n"

clean:
	@rm -rf objs
	@echo "\nObjects deleted\n"
	
fclean: clean
	@rm -rf $(NAME)
	@echo "Library deleted\n"

re: fclean all
