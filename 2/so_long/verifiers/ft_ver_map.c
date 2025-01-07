/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ver_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:23:43 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/01/06 16:05:05 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	ft_ver_map(t_data *frame)
{
	int	cl;
	int	rw;
	int	pos;

	rw = -1;
	while (++rw < frame->rows)
	{
		cl = 0;
		while (cl < frame->cols)
		{
			pos = frame->map[rw][cl++];
			if (pos == 'C')
				frame->collect++;
			else if (pos == 'P')
				frame->player++;
			else if (pos == 'E')
				frame->exit++;
			else if (pos != '0' && pos != '1')
				return (ft_map_free(frame),
					write(2, "Ha!\n(Wrong character)\n", 22) * 0);
		}
	}
	if (frame->player != 1 || frame->exit != 1 || frame->collect < 1)
		return (write(2, "Hee-hee!\n(Check P, E and Cs)\n", 29) * 0);
	return (1);
}
