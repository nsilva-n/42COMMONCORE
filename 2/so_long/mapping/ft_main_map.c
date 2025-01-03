/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:54:10 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/12/22 15:30:39 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	ft_main_map(char *str, t_data *frame)
{
	int	fd;

	fd = ft_ver_fd(str);
	if (!fd)
		return (write(2, "Uh!\n(Couldn't open file)\n", 25) * 0);
	if (!ft_map_build(frame) || !ft_map_fill(fd, frame))
		return (close(fd), 0);
	return (1);
}
