# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/27 14:58:52 by guvascon          #+#    #+#              #
#    Updated: 2025/01/27 14:59:38 by guvascon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 

OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = push_swap.a

all : $(NAME) 
$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus:$(BONUS) $(BONUS_OBJ)
			ar rcs $(NAME) $(BONUS_OBJ)

clean:
	rm -f $(OBJS) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re bonus