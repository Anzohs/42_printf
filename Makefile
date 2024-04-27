# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hladeiro <hladeiro@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/27 13:24:33 by hladeiro          #+#    #+#              #
#    Updated: 2024/04/27 17:27:44 by hladeiro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT = libft/libft.a
lib = cd libft && make

SRCS = ft_printf.c
OBJS			= $(SRCS:.c=.o)

CC				= gcc
RM				= rm -f
CP				= cp
CFLAGS			= -Wall -Wextra -Werror 
NAME			= libftprintf.a
INCLUDE			= -qinclude

all:			$(NAME)

$(NAME):		$(OBJS)
				$(lib)
				ar rcs $(NAME) $(OBJS) $(LIBFT)

clean:
				$(RM) $(OBJS) 
				$(lib) clean

fclean:			clean
				$(RM) $(NAME)
				$(lib) fclean

re:				fclean $(NAME)

test:
				ar -t $(NAME)
.PHONY:			all clean fclean re libft
