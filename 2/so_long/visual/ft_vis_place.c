/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vis_place.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:43:20 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/12/22 15:51:57 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	ft_vis_place(t_data *frame, int rw, int cl)
{
	if (frame->map[rw][cl] == '1')
		mlx_put_image_to_window(frame->mlx, frame->window, frame->tx_wall,
			cl * 50, rw * 50);
	else if (frame->map[rw][cl] == '0')
		mlx_put_image_to_window(frame->mlx, frame->window, frame->tx_floor,
			cl * 50, rw * 50);
	else if (frame->map[rw][cl] == 'C')
		mlx_put_image_to_window(frame->mlx, frame->window, frame->tx_coll,
			cl * 50, rw * 50);
	else if (frame->map[rw][cl] == 'P')
		mlx_put_image_to_window(frame->mlx, frame->window, frame->tx_mj_l,
			cl * 50, rw * 50);
	else if (frame->map[rw][cl] == 'E')
		mlx_put_image_to_window(frame->mlx, frame->window, frame->tx_exit,
			cl * 50, rw * 50);
}
