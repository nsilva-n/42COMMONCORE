/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vis_load.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:38:14 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/12/22 15:36:56 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	ft_vis_load(t_data *frame)
{
	int	rw;
	int	cl;

	rw = -1;
	while (++rw < frame->rows)
	{
		cl = -1;
		while (++cl < frame->cols)
			ft_vis_place(frame, rw, cl);
	}
}
