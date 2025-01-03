/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 12:17:57 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/12/19 16:04:42 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	ft_map_free(t_data *frame)
{
	int	i;

	i = 0;
	while (frame->map && i < frame->rows)
		free(frame->map[i++]);
	free(frame->map);
}
