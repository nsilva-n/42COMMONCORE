/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_philo_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 12:49:06 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/03/13 13:43:15 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*ft_philo_check(void *args)
{
	t_philo	*philo;

	philo = (t_philo *)args;
	if (philo->n_philo == 1 && !ft_check_death(philo))
	{
		if (pthread_mutex_lock(philo->l_fork))
			return (NULL);
		ft_print(philo, "has taken a fork");
		while (1)
			if (ft_check_death(philo))
				break ;
		pthread_mutex_unlock(philo->l_fork);
	}
	else
	{
		while (1)
		{
			if (ft_check_death(philo))
				break ;
			ft_philo_eat(philo);
			ft_philo_sleep(philo);
			ft_philo_think(philo);
		}
	}
	return (NULL);
}
