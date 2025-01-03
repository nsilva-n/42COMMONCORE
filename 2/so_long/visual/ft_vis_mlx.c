/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vis_mlx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 12:39:18 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/12/18 12:41:51 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	ft_vis_mlx(t_data *frame)
{
	frame->mlx = mlx_init();
	if (!frame->mlx)
		return (0);
	return (1);
}
