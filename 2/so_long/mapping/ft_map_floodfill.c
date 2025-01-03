/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_floodfill.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:37:25 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/12/17 14:08:29 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	ft_map_floodfill(t_data *frame, int rw, int cl)
{
	if (cl < 0 || cl >= frame->cols)
		return ;
	if (rw < 0 || rw >= frame->rows)
		return ;
	if (frame->dup_map[rw][cl])
		return ;
	if (frame->cnt_exit && frame->cnt_collect == frame->collect)
		return ;
	frame->dup_map[rw][cl] = 1;
	if (frame->map[rw][cl] == '1')
		return ;
	frame->cnt_exit += (frame->map[rw][cl] == 'E');
	frame->cnt_collect += (frame->map[rw][cl] == 'C');
	ft_map_floodfill(frame, rw + 1, cl);
	ft_map_floodfill(frame, rw - 1, cl);
	ft_map_floodfill(frame, rw, cl + 1);
	ft_map_floodfill(frame, rw, cl - 1);
	return ;
}
