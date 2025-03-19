/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wait.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:03:46 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/03/18 13:09:50 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ft_wait(t_philo *philo, size_t wait)
{
	size_t	time;

	time = ft_get_time();
	while (ft_get_time() - time < wait)
	{
		if (ft_check_death(philo))
			break ;
		usleep(1);
	}
}
