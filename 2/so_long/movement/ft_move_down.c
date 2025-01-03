/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_down.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 15:17:16 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/12/22 15:36:43 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	ft_move_down(t_data *frame)
{
	int	rw;
	int	cl;

	rw = frame->start_rw;
	cl = frame->start_cl;
	if (frame->map[rw + 1][cl] != '1')
	{
		frame->moves++;
		if (frame->map[rw + 1][cl] == 'C')
			frame->cnt_collect--;
		frame->start_rw++;
		if (frame->map[rw][cl] != 'E')
			frame->map[rw][cl] = '0';
		if (frame->map[rw + 1][cl] != 'E')
			frame->map[rw + 1][cl] = 'P';
		if (frame->map[rw + 1][cl] == 'E' && frame->cnt_collect == 0)
		{
			ft_move_print(frame);
			ft_exit(frame);
		}
		ft_vis_load(frame);
	}
	ft_move_print(frame);
}
