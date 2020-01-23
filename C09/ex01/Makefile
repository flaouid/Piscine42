# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flaouid <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/17 15:21:53 by flaouid           #+#    #+#              #
#    Updated: 2019/09/19 10:49:51 by flaouid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

PATH_SRCS =	./srcs/

SRCS    =	./srcs/ft_putchar.c\
			./srcs/ft_swap.c\
			./srcs/ft_putstr.c\
			./srcs/ft_strlen.c\
			./srcs/ft_strcmp.c\

OBJS    =	$(SRCS:.c=.o)

INCLUDES =	./includes/

CFLAGS =	-Wall -Wextra -Werror

all : $(NAME)
.c.o :
	    gcc -c $(CFLAGS) -I $(INCLUDES) $< -o $(<:.c=.o)

$(NAME) : $(OBJS)
		ar rc $(NAME) $(OBJS)

clean :
		rm -f $(OBJS)

fclean : clean
		rm -f $(NAME)

re:		fclean all

.PHONY: all clean fclean re
