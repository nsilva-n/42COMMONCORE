# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/16 12:54:07 by nsilva-n          #+#    #+#              #
#    Updated: 2025/03/14 13:03:18 by nsilva-n         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philo
CC = gcc
CFLAGS = -g -Wall -Wextra -Werror
SRC = 	main.c														\
		ft_atoll.c			ft_check_args.c		ft_check_death.c	\
		ft_create_threads.c	ft_exit.c			ft_get_time.c		\
		ft_init.c			ft_isdigit.c		ft_parse_args.c		\
		ft_philo_check.c	ft_philo_eat.c		ft_philo_sleep.c	\
		ft_philo_think.c	ft_print.c			ft_wait.c

OBJ_DIR = objects
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))

all: $(NAME)

.c.o:
	@${CC} $(CFLAGS) -c $< -o ${<:.c=.o}

${NAME}: ${OBJ}
	@${CC} ${CFLAGS} ${OBJ} -o ${NAME} $(INCLUDE_LFT)

$(OBJ_DIR)/%.o: ./%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -rf $(NAME)
	
re: fclean all

.PHONY: all clean fclean re