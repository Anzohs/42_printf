# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hladeiro <hladeiro@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/27 13:24:33 by hladeiro          #+#    #+#              #
#    Updated: 2024/04/28 16:13:01 by hladeiro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT = libft/libft.a
lib = cd libft && make

SRCS = ft_printf.c ft_printf_write.c
OBJS			= $(SRCS:.c=.o)

CC				= cc
RM				= rm -f
CP				= cp
CFLAGS			= -Wall -Wextra -Werror 
NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS)
				$(lib) 
				@cp $(LIBFT) .
				@mv libft.a $(NAME)
				ar rcs $(NAME) $(LIBFT) $(OBJS) 

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
