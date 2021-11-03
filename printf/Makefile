# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/10 19:13:50 by agallipo          #+#    #+#              #
#    Updated: 2021/11/02 13:16:14 by jpopa-po         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
SRCS	= ft_printf.c  ft_pt.c ft_ct.c ft_idt.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_putunbr.c ft_st.c ft_strdup.c ft_ut.c ft_xt.c
OBJS	= $(SRCS:.c=.o)
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

all: $(NAME)

$(NAME) : $(OBJS)
	@echo [COMPILANDO...]
	ar rc $(NAME) $(OBJS)
#$(OBJS) : $(SRCS)
#	@gcc $(CFLAGS) -c $(SRCS)
clean:
			$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)
re:			fclean all
.PHONY:     bonus all clean fclean re
