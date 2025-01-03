/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_dupfree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:12:49 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/12/19 15:53:38 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	ft_map_dupfree(t_data *frame)
{
	int	i;

	i = 0;
	while (frame->dup_map && i < frame->rows)
		free(frame->dup_map[i++]);
	free(frame->dup_map);
}
