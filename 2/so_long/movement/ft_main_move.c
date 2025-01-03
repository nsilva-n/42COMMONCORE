/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main_move.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:52:12 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/12/19 15:48:35 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	ft_main_move(int key_pressed, t_data *frame)
{
	if (key_pressed == 65307)
		ft_exit(frame);
	else if (key_pressed == W_KEY || key_pressed == UP_KEY)
		ft_move_up(frame);
	else if (key_pressed == A_KEY || key_pressed == LEFT_KEY)
		ft_move_left(frame);
	else if (key_pressed == S_KEY || key_pressed == DOWN_KEY)
		ft_move_down(frame);
	else if (key_pressed == D_KEY || key_pressed == RIGHT_KEY)
		ft_move_right(frame);
	return (0);
}
