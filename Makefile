# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malde-ch <malo@chato.fr>                   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/12 16:06:06 by malde-ch          #+#    #+#              #
#    Updated: 2024/09/16 18:16:42 by malde-ch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
LIB = ar rcs
RM = rm -f
OBJ = $(SRC:.c=.o)
INCLUDE = libft.h
SRC = ft_substr.c ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c


all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
		$(LIB) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(FLAGS) -c -o $@ $<

clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all


