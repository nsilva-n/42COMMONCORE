/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ver_rect.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 14:36:29 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/12/22 15:33:38 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	ft_ver_rect(int fd, t_data *frame)
{
	char	*line;
	int		len_fst_line;

	line = ft_get_next_line(fd);
	if (!line)
		return (0);
	len_fst_line = ft_linelen(line);
	while (line)
	{
		if (len_fst_line != ft_linelen(line))
			return (free(line), 0);
		free(line);
		frame->rows++;
		line = ft_get_next_line(fd);
	}
	if (!len_fst_line)
		return (0);
	frame->cols = len_fst_line;
	return (1);
}
