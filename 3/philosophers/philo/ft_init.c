/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:43:00 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/03/18 13:15:51 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ft_init(t_philo *philo, pthread_mutex_t *forks, pthread_mutex_t *death)
{
	long long int	i;

	i = -1;
	while (++i < philo->n_philo)
	{
		philo[i].l_fork = &forks[i];
		philo[i].r_fork = &forks[(i + 1) % philo->n_philo];
		pthread_mutex_init(philo[i].l_fork, NULL);
		philo[i].death = death;
	}
	pthread_mutex_init(philo->death, NULL);
}
