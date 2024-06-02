# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/02 16:20:06 by flopez-r          #+#    #+#              #
#    Updated: 2024/06/02 16:20:26 by flopez-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philo

RED =			\033[0;91m
GREEN =			\033[0;92m
CYAN =			\033[0;96m
BLUE=			\033[0;34m
PURPLE=			\033[0;35m
YELLOW =		\033[0;93m
RESET=			\033[0m

SOURCE	=	main.c

UTILS	= 

SRC = $(SOURCE) $(UTILS)

OBJ_DIR = obj

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))

CC = gcc
INCLUDES= -I includes
SANITIZE_THREADS=  -fsanitize=thread -g3
SANITIZE_LEAKS=  -fsanitize=address -g3
# CFLAGS = -Wall -Wextra -Werror -pthread -O3 $(INCLUDES)
CFLAGS = -Wall -Wextra -Werror -pthread -O3 $(INCLUDES) $(SANITIZE_THREADS)

all: $(OBJ_DIR) $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	echo "\n$(GREEN)Objects compiled successfuly ✅$(RESET)"
	echo "$(GREEN)Program $(NAME) created ✅$(RESET)"

$(OBJ_DIR)/%.o: %.c
	@echo "$(YELLOW)Compiling ...$(RESET)"
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	echo "\n$(YELLOW)Creating object directories ...$(RESET)"
	mkdir -p $(OBJ_DIR)
	mkdir -p $(OBJ_DIR)/src
	mkdir -p $(OBJ_DIR)/utils

clean:
	echo "\n$(CYAN)Cleaning objects$(RESET)"
	rm -rf $(OBJ_DIR)
	echo "$(CYAN)Objects cleaned successfuly ✅$(RESET)"

fclean: clean
	echo "\n$(BLUE)Cleaning $(NAME)$(RESET)"
	rm -rf $(NAME)
	echo "$(BLUE)Program cleaned successfuly ✅$(RESET)"

re:	fclean all

.PHONY: all clean fclean re
.SILENT: all clean fclean re $(OBJ_DIR) $(NAME)
