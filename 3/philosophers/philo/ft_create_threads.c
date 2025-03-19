/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_threads.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:46:12 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/03/13 14:01:15 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ft_create_threads(t_philo *philo)
{
	long long int	i;

	i = -1;
	while (++i < philo->n_philo)
	{
		pthread_create(&philo[i].thread, NULL, &ft_philo_check, &philo[i]);
		usleep(100);
	}
}
