# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/27 14:58:52 by guvascon          #+#    #+#              #
#    Updated: 2025/03/24 13:52:49 by guvascon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/push_swap.c srcs/aux.c srcs/print_stack.c srcs/move_push.c \
		srcs/push_utils.c srcs/move_move.c srcs/push_swapteste.c
OBJS = $(SRCS:.c=.o)

CC = @cc
CFLAGS = -g -Wall -Wextra -Werror
RM = rm -f

LIBFT_PATH = ./Libft
LIBFT = $(LIBFT_PATH)/libft.a

NAME = push_swap

all : $(NAME) 
$(NAME) : $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

$(LIBFT):
	@echo " [ .. ] | Compiling.."
	@make -s -C $(LIBFT_PATH)
	@echo " [ OK ] | Ready!"

clean:
	@$(RM) $(OBJS) 
	@$(RM) $(LIBFT_PATH)/*.o
	@echo "all objects were removed"
	
fclean: clean
	@$(RM) $(NAME) 
	@make -s fclean -C $(LIBFT_PATH)
	clear
	@echo "all files were removed"

re: fclean $(NAME)
	clear
	@echo "bla bla bla"
.PHONY: all clean fclean re bonus