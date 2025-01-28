# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/29 12:28:49 by guvascon          #+#    #+#              #
#    Updated: 2025/01/27 17:51:45 by guvascon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
       ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
	   ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
	   ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
	   ft_substr.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_strjoin.c \
	   ft_putendl_fd.c ft_strmapi.c ft_striteri.c ft_itoa.c ft_split.c ft_strtrim.c \

OBJS = $(SRCS:.c=.o)

PRINTF_SRCS = printf/ft_printf.c  printf/ft_putchar.c  printf/ft_putstr.c \
			  printf/ft_putnbr_base.c printf/ft_strlen.c \
			  printf/ft_print_format.c  printf/ft_print_pointer.c 

PRINTF_OBJS = $(PRINTF_SRCS:.c=.o)

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

BONUS_OBJ = $(BONUS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a
PRINTF_NAME = libftprintf.a

all : $(NAME) $(PRINTF_NAME)
$(NAME) : $(OBJS) 
	ar rcs $(NAME) $(OBJS)

bonus: $(BONUS_OBJ)
			ar rcs $(NAME) $(BONUS_OBJ)

printf: $(PRINTF_OBJS)
			ar rcs $(PRINTF_NAME) $(PRINTF_OBJS)

clean:
	rm -f $(OBJS) $(BONUS_OBJ) $(PRINTF_OBJS)

fclean: clean
	rm -f $(NAME) $(PRINTF_NAME)

re: fclean all

.PHONY: all clean fclean re bonus printf