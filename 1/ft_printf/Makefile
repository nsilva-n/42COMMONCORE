# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 14:50:27 by nsilva-n          #+#    #+#              #
#    Updated: 2024/11/20 17:58:44 by nsilva-n         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 	ft_printf_bigx.c		ft_printf_c.c		ft_printf_d.c		ft_printf_i.c	\
		ft_printf_p.c			ft_printf_percent.c	ft_printf_s.c		ft_printf_u.c	\
		ft_printf_x.c			ft_printf.c

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

HEADER = -I includes

all: $(NAME)

$(NAME): $(OBJS)
	@ar -rcs $(NAME) $(OBJS)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
