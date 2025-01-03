/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main_vis.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 12:33:35 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/12/19 14:24:09 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	ft_main_vis(t_data *frame)
{
	if (!ft_vis_mlx(frame) || !ft_vis_window(frame))
		ft_exit(frame);
	if (!ft_vis_textures(frame))
		ft_exit(frame);
	ft_vis_load(frame);
	mlx_key_hook(frame->window, ft_main_move, frame);
	mlx_hook(frame->window, 17, 0, ft_exit, frame);
	ft_move_print(frame);
	mlx_loop(frame->mlx);
}
