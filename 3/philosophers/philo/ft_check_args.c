/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:42:01 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/03/17 15:33:13 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ft_check_args(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	if (ac != 5 && ac != 6)
		return (0);
	while (av[++i])
	{
		j = -1;
		while (av[i][++j])
			if (!(ft_isdigit(av[i][j])
				|| (av[i][j] == '+' && ft_isdigit(av[i][j + 1]))))
				return (0);
	}
	if (!ft_atoll(av[1]))
		return (0);
	return (1);
}
