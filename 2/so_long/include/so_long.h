/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 12:59:21 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/12/22 15:52:17 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../lib/minilibx-linux/mlx.h"
# include "../lib/minilibx-linux/mlx_int.h"
# include "../lib/libft/libft.h"

# define ESC 65307
# define W_KEY 119
# define A_KEY	97
# define S_KEY	115
# define D_KEY	100
# define UP_KEY	65362
# define DOWN_KEY 65364
# define RIGHT_KEY 65363
# define LEFT_KEY 65361

typedef struct s_data
{
	int		cols;
	int		rows;
	int		**map;
	int		collect;
	int		player;
	int		exit;
	int		start_rw;
	int		start_cl;
	int		cnt_collect;
	int		cnt_exit;
	int		cnt_rows;
	int		**dup_map;
	int		dup_rw;
	int		dup_cl;
	int		moves;
	int		px;
	void	*mlx;
	void	*window;
	void	*tx_mj_l;
	void	*tx_mj_r;
	void	*tx_exit;
	void	*tx_coll;
	void	*tx_wall;
	void	*tx_floor;
}	t_data;

int		ft_exit(t_data *frame);

// MAPPING
int		ft_main_map(char *str, t_data *frame);
int		ft_map_build(t_data *frame);
int		ft_map_dup(t_data *frame);
void	ft_map_dupfree(t_data *frame);
int		ft_map_fill(int fd, t_data *frame);
void	ft_map_floodfill(t_data *frame, int rw, int cl);
void	ft_map_free(t_data *frame);
void	ft_map_plocation(t_data *frame, int rw, int cl);

// MOVEMENT
int		ft_main_move(int key_pressed, t_data *frame);
void	ft_move_down(t_data *frame);
void	ft_move_left(t_data *frame);
void	ft_move_print(t_data *frame);
void	ft_move_right(t_data *frame);
void	ft_move_up(t_data *frame);

// VERIFIERS
int		ft_main_ver(char *str, t_data *frame);
int		ft_ver_fd(char *str);
int		ft_ver_map(t_data *frame);
int		ft_ver_path(t_data *frame);
int		ft_ver_rect(int fd, t_data *frame);
int		ft_ver_walls(t_data *frame);

// VISUAL
void	ft_main_vis(t_data *frame);
void	ft_vis_load(t_data *frame);
int		ft_vis_mlx(t_data *frame);
void	ft_vis_place(t_data *frame, int rw, int cl);
int		ft_vis_textures(t_data *frame);
int		ft_vis_window(t_data *frame);

#endif