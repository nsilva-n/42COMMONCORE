# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/16 12:54:07 by nsilva-n          #+#    #+#              #
#    Updated: 2025/02/10 14:50:38 by nsilva-n         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = 	main.c	exit.c																										\
																															\
			operators/ft_push.c			operators/ft_rotate.c		operators/ft_rrotate.c		operators/ft_swap.c			\
		parsing/ft_main_parse.c																								\
			parsing/ft_parse_atoi_ps.c	parsing/ft_parse_single.c	parsing/ft_parse_stack.c								\
		search/ft_main_search.c																								\
			search/ft_search_loop.c																							\
		sort/ft_main_sort.c																									\
			sort/ft_sort_a.c			sort/ft_sort_b_to_three.c	sort/ft_sort_b.c			sort/ft_sort_rarb.c			\
			sort/ft_sort_rarrb.c		sort/ft_sort_rotate.c		sort/ft_sort_rrarb.c		sort/ft_sort_rrarrb.c		\
			sort/ft_sort_three.c																							\
																															\
			stack/ft_stack_addback.c	stack/ft_stack_free.c		stack/ft_stack_index.c		stack/ft_stack_last.c		\
			stack/ft_stack_max.c		stack/ft_stack_min.c		stack/ft_stack_new.c		stack/ft_stack_size.c		\
																															\
			verifiers/ft_ver_chars.c	verifiers/ft_ver_minplus.c	verifiers/ft_ver_quotes.c	verifiers/ft_ver_repeated.c	\
			verifiers/ft_ver_sorted.c

OBJ_DIR = objects
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))
LIBFT_LIB = ./lib/libft
INCLUDE_LFT = ./lib/libft/libft.a

all: $(LIBFT) $(NAME)

.c.o:
	@${CC} $(CFLAGS) -c $< -o ${<:.c=.o}

${NAME}: ${OBJ}
	@make -C $(LIBFT_LIB)
	@${CC} ${CFLAGS} ${OBJ} -o ${NAME} $(INCLUDE_LFT)

$(OBJ_DIR)/%.o: ./%.c
	@mkdir -p $(OBJ_DIR) 
	@mkdir -p $(OBJ_DIR)/operators 
	@mkdir -p $(OBJ_DIR)/parsing
	@mkdir -p $(OBJ_DIR)/search
	@mkdir -p $(OBJ_DIR)/sort
	@mkdir -p $(OBJ_DIR)/stack
	@mkdir -p $(OBJ_DIR)/verifiers
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)
	@rm -rf $(OBJ_DIR)
	@make clean -C ./$(LIBFT_LIB)

fclean: clean
	@rm -rf $(NAME)
	@make fclean -C ./$(LIBFT_LIB)
	
re: fclean all

.PHONY: all clean fclean re