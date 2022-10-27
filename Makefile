# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: noloupe <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/17 14:42:25 by noloupe           #+#    #+#              #
#    Updated: 2022/10/27 16:26:58 by noloupe          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=	ft_printf.c\
			conversion1.c\
			conversion2.c\
			ft_putnbr_base.c\
			ft_putptr.c\
			ft_putunsignednbr_base.c\
			ft_strlen.c\


OBJS	=	$(SRCS:.c=.o)

CC		=	gcc

FLAGS	=	-Wall -Werror -Wextra

all:		$(NAME)

$(NAME):	$(OBJS)
		ar -rc $(NAME) $(OBJS)

.c.o:
		$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

clean:
		rm -f $(OBJS)

fclean:		clean
		rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
