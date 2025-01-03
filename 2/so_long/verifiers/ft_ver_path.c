/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ver_path.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:03:04 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/12/29 15:55:00 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	ft_ver_path(t_data *frame)
{
	if (ft_map_dup(frame) != frame->rows)
		return (ft_map_dupfree(frame), 0);
	ft_map_floodfill(frame, frame->start_rw, frame->start_cl);
	if (frame->cnt_collect != frame->collect || !frame->cnt_exit)
		return (ft_map_dupfree(frame), ft_map_free(frame), 0);
	return (ft_map_dupfree(frame), 1);
}
