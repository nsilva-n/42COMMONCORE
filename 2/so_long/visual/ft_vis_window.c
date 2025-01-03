/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vis_window.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 12:42:39 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/12/18 15:13:44 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	ft_vis_window(t_data *frame)
{
	int	size_rw;
	int	size_cl;

	size_rw = frame->rows * 50;
	size_cl = frame->cols * 50;
	frame->window = mlx_new_window(frame->mlx, size_cl, size_rw, "so_long");
	if (!frame->window)
		ft_exit(frame);
	return (1);
}
