/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 15:20:58 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/01/06 12:45:56 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/so_long.h"

int	ft_exit(t_data *frame)
{
	if (frame->tx_coll)
		mlx_destroy_image(frame->mlx, frame->tx_coll);
	if (frame->tx_exit)
		mlx_destroy_image(frame->mlx, frame->tx_exit);
	if (frame->tx_mj_l)
		mlx_destroy_image(frame->mlx, frame->tx_mj_l);
	if (frame->tx_floor)
		mlx_destroy_image(frame->mlx, frame->tx_floor);
	if (frame->tx_wall)
		mlx_destroy_image(frame->mlx, frame->tx_wall);
	if (frame->window)
		mlx_destroy_window(frame->mlx, frame->window);
	if (frame->mlx)
		mlx_destroy_display(frame->mlx);
	if (frame->mlx)
		mlx_loop_end(frame->mlx);
	free(frame->mlx);
	ft_map_free(frame);
	exit(1);
}
