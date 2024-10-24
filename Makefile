NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
LIB = ar rcs
RM = rm -f
OBJ = $(SRC:.c=.o)
INCLUDE = libft.h get_next_line.h
SRC = ft_substr.c ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c \
ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c \
ft_strjoin.c get_next_line.c

FT_PRINTF_DIR = ft_printf

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	$(MAKE) -C $(FT_PRINTF_DIR)  # Appel au make de ft_printf
	cp $(FT_PRINTF_DIR)/libftprintf.a $(NAME) # Copie du fichier de la librairie ft_printf
	$(LIB) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(FLAGS) -c -o $@ $<

clean: 
	$(MAKE) -C $(FT_PRINTF_DIR) clean
	$(RM) $(OBJ)

fclean: clean
	$(MAKE) -C $(FT_PRINTF_DIR) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean all re fclean

