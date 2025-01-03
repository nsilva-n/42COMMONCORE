/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ver_walls.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 12:24:06 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/12/22 15:39:39 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	ft_ver_walls(t_data *frame)
{
	int	rw;
	int	cl;

	rw = 0;
	cl = -1;
	while (++cl < frame->cols)
		if (frame->map[rw][cl] != '1' || frame->map[frame->rows - 1][cl] != '1')
			return (0);
	while (++rw < frame->rows)
		if (frame->map[rw][0] != '1' || frame->map[rw][frame->cols - 1] != '1')
			return (0);
	return (1);
}
