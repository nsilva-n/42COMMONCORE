/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main_ver.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 14:09:11 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/12/22 16:02:13 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	ft_main_ver(char *str, t_data *frame)
{
	int	fd;

	fd = ft_ver_fd(str);
	if (!fd)
		return (write(2, "Uh!\n(Couldn't open file)\n", 25) * 0);
	if (!ft_ver_rect(fd, frame))
		return (close(fd), write(2, "Ahhh\n(Map is not rectangle)\n", 28) * 0);
	close(fd);
	if (!ft_main_map(str, frame) || !ft_ver_map(frame))
		return (0);
	if (!ft_ver_walls(frame))
		return (close(fd), write(2, "Hee-hee\n(Map is not closed)\n", 28) * 0);
	if (!ft_ver_path(frame))
		return (close(fd), write(2, "Uhhh!\n(Can't reach exit)\n", 25) * 0);
	return (close(fd), 1);
}
