/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:25:02 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/12/26 12:58:38 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/so_long.h"

int	main(int ac, char **av)
{
	int				i;
	static t_data	frame;

	if (ac == 2)
	{
		i = ft_strlen(av[1]);
		if (i >= 4 && !(ft_strncmp(av[1] + i - 4, ".ber", 4)))
		{
			if (ft_main_ver(av[1], &frame))
				ft_main_vis(&frame);
			else
				return (0);
		}
		else
			write(2, "Ooh\n(Just .ber files)\n", 22);
	}
	else
		return (write(2, "Hee-hee\n(Wrong number of arguments)\n", 36));
	ft_map_free(&frame);
}
