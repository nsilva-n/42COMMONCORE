/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vis_textures.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 12:52:08 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/12/22 15:54:36 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	ft_vis_textures(t_data *frame)
{
	frame->px = 50;
	frame->tx_wall = mlx_xpm_file_to_image(frame->mlx,
			"./textures/wall.xpm", &(frame->px), &(frame->px));
	frame->tx_floor = mlx_xpm_file_to_image(frame->mlx,
			"./textures/floor.xpm", &(frame->px), &(frame->px));
	frame->tx_coll = mlx_xpm_file_to_image(frame->mlx,
			"./textures/collectible.xpm", &(frame->px), &(frame->px));
	frame->tx_mj_l = mlx_xpm_file_to_image(frame->mlx,
			"./textures/mj/mj_left/mj_l_00.xpm", &(frame->px), &(frame->px));
	frame->tx_exit = mlx_xpm_file_to_image(frame->mlx,
			"./textures/exit.xpm", &(frame->px), &(frame->px));
	if (!frame->tx_coll || !frame->tx_exit || !frame->tx_floor
		|| !frame->tx_mj_l || !frame->tx_wall)
		return (write(2, "Ah-uh!\n(Missing textures)\n", 26) * 0);
	return (1);
}
