/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_death.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:55:37 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/03/19 12:29:57 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ft_check_death(t_philo *philo)
{
	if (philo->n_meals == philo->total_meals)
		return (1);
	pthread_mutex_lock(philo->death);
	if (*philo->c_death)
		return (pthread_mutex_unlock(philo->death), 1);
	pthread_mutex_unlock(philo->death);
	if (ft_get_time() - philo->last_meal > philo->time_die)
		return (ft_print(philo, "died"), 1);
	return (0);
}
