/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_fill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:27:01 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/12/22 15:31:35 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	ft_map_fill(int fd, t_data *frame)
{
	char	*line;
	int		rw;
	int		cl;

	rw = -1;
	while (++rw < frame->rows)
	{
		line = ft_get_next_line(fd);
		frame->map[rw] = (int *)malloc(frame->cols * sizeof(int));
		if (!(frame->map[rw]))
			return (write(2, "Hee!\n(Malloc failed)\n", 21) * 0);
		cl = -1;
		while (++cl < frame->cols)
		{
			frame->map[rw][cl] = (int)line[cl];
			if (frame->map[rw][cl] == 'P')
				ft_map_plocation(frame, rw, cl);
		}
		free(line);
	}
	return (1);
}
