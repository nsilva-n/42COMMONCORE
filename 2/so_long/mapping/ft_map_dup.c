/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_dup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:43:04 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/12/22 15:31:28 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	ft_map_dup(t_data *frame)
{
	int	rw;
	int	cl;

	frame->dup_map = malloc(frame->rows * sizeof(int *));
	if (!frame->dup_map)
		return (write(2, "Hee!\n(Malloc failed)\n", 21) * 0);
	rw = -1;
	while (++rw < frame->rows)
	{
		frame->dup_map[rw] = malloc(frame->cols * sizeof(int));
		if (!frame->dup_map[rw])
			return (0);
		cl = -1;
		while (++cl < frame->cols)
			frame->dup_map[rw][cl] = 0;
	}
	return (rw);
}
