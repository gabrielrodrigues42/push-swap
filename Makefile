# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/12 21:06:44 by gandrade          #+#    #+#              #
#    Updated: 2022/01/25 19:02:37 by gandrade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc
CFLAGS = -Wall -Wextra -Werror

RM = rm -rf
MKDIR = mkdir -p

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a
LIBFT_FLAGS = -L$(LIBFT_DIR) -lft

INCLUDE_DIR = ./include $(LIBFT_DIR)/include
INCLUDE = $(addprefix -I, $(INCLUDE_DIR))

SRC_DIR = ./src
OBJ_DIR = ./obj

SRC_FILES = main.c \
            parse_args.c \
            input_validators.c \

SRC = $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJ = $(subst $(SRC_DIR), $(OBJ_DIR), $(SRC:.c=.o))

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(MKDIR) $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(LIBFT) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT_FLAGS) $(INCLUDE) -o $@

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

all: $(NAME)

clean:
	$(MAKE) clean -C $(LIBFT_DIR)
	$(RM) $(OBJ_DIR)

fclean: clean
	$(MAKE) fclean -C $(LIBFT_DIR)
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
