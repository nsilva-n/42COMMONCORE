/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_left.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 15:18:43 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/12/22 15:36:37 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	ft_move_left(t_data *frame)
{
	int	rw;
	int	cl;

	rw = frame->start_rw;
	cl = frame->start_cl;
	if (frame->map[rw][cl - 1] != '1')
	{
		frame->moves++;
		if (frame->map[rw][cl - 1] == 'C')
			frame->cnt_collect--;
		frame->start_cl--;
		if (frame->map[rw][cl] != 'E')
			frame->map[rw][cl] = '0';
		if (frame->map[rw][cl - 1] != 'E')
			frame->map[rw][cl - 1] = 'P';
		if (frame->map[rw][cl - 1] == 'E' && frame->cnt_collect == 0)
		{
			ft_move_print(frame);
			ft_exit(frame);
		}
		ft_vis_load(frame);
	}
	ft_move_print(frame);
}
