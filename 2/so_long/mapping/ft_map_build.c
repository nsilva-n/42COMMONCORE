/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_build.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:58:46 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/12/22 15:30:24 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	ft_map_build(t_data *frame)
{
	frame->map = (int **)malloc(frame->cols * sizeof(int *));
	if (!(frame->map))
		return (write(2, "Hee!\n(Malloc failed)\n", 21) * 0);
	return (1);
}
