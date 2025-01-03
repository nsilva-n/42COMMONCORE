# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/16 12:54:07 by nsilva-n          #+#    #+#              #
#    Updated: 2024/12/29 16:32:56 by nsilva-n         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = 	main.c	exit.c																									\
		mapping/ft_main_map.c																							\
			mapping/ft_map_build.c		mapping/ft_map_dup.c	mapping/ft_map_dupfree.c	mapping/ft_map_fill.c		\
			mapping/ft_map_floodfill.c	mapping/ft_map_free.c	mapping/ft_map_plocation.c								\
		movement/ft_main_move.c																							\
			movement/ft_move_right.c	movement/ft_move_up.c															\
			movement/ft_move_down.c		movement/ft_move_left.c	movement/ft_move_print.c								\
		verifiers/ft_main_ver.c																							\
			verifiers/ft_ver_fd.c		verifiers/ft_ver_map.c	verifiers/ft_ver_path.c									\
			verifiers/ft_ver_rect.c		verifiers/ft_ver_walls.c														\
		visual/ft_main_vis.c																							\
			visual/ft_vis_load.c		visual/ft_vis_mlx.c		visual/ft_vis_place.c									\
			visual/ft_vis_textures.c	visual/ft_vis_window.c

OBJ_DIR = objects
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))
LIBFT_LIB = ./lib/libft
MLIBX_LIB = ./lib/minilibx-linux
INCLUDE_LFT = ./lib/libft/libft.a
INCLUDE_MLX = ./lib/minilibx-linux/libmlx_Linux.a


all: $(LIBFT) $(NAME)

.c.o:
	${CC} $(CFLAGS) -c $< -o ${<:.c=.o}

${NAME}: ${OBJ}
	@make -C $(LIBFT_LIB)
	@make -C $(MLIBX_LIB) -Lmlx -lXext -lX11
	@${CC} ${CFLAGS} ${OBJ} -o ${NAME} $(INCLUDE_LFT) ${INCLUDE_MLX} -Lmlx -lXext -lX11

$(OBJ_DIR)/%.o: ./%.c
	@mkdir -p $(OBJ_DIR) 
	@mkdir -p $(OBJ_DIR)/mapping 
	@mkdir -p $(OBJ_DIR)/movement
	@mkdir -p $(OBJ_DIR)/verifiers
	@mkdir -p $(OBJ_DIR)/visual
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)
	@rm -rf $(OBJ_DIR)
	@make clean -C ./$(LIBFT_LIB)
	@make clean -C ./$(MLIBX_LIB)

fclean: clean
	@rm -rf $(NAME)
	@make fclean -C ./$(LIBFT_LIB)
	
re: fclean all

.PHONY: all clean fclean re