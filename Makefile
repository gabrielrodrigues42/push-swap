# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/12 21:06:44 by gandrade          #+#    #+#              #
#    Updated: 2022/03/13 15:41:02 by gandrade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc
CFLAGS = -Wall -Wextra -Werror

RM = rm -rf
MKDIR = mkdir -p $(@D)

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a
LIBFT_FLAGS = -L$(LIBFT_DIR) -lft

INCLUDE_DIR = ./include $(LIBFT_DIR)/include
INCLUDE = $(addprefix -I, $(INCLUDE_DIR))

SRC_DIR = ./src
OBJ_DIR = ./obj
PARSE_DIR = parse
MOVES_DIR = moves

SRC_FILES = main.c \
            check_sort_cases.c \
            clear_exit.c \
            load_stack.c \
            sort_five.c \
            sort_three.c \
            $(PARSE) \
            $(MOVES) \

PARSE_FILES = parse_args.c \
              input_validations.c \

MOVES_FILES = push.c \
              swap.c \
              rotate.c \
              reverse_rotate.c \

PARSE = $(addprefix $(PARSE_DIR)/, $(PARSE_FILES))
MOVES = $(addprefix $(MOVES_DIR)/, $(MOVES_FILES))
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC_FILES:.c=.o))

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(MKDIR)
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
