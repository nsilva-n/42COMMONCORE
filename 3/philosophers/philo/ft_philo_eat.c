/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_philo_eat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:54:01 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/03/19 12:30:49 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ft_philo_eat(t_philo *philo)
{
	if (ft_check_death(philo))
		return ;
	if (!(philo->id % 2))
		pthread_mutex_lock(philo->l_fork);
	else
		pthread_mutex_lock(philo->r_fork);
	ft_print(philo, "has taken a fork");
	if (!(philo->id % 2))
		pthread_mutex_lock(philo->r_fork);
	else
		pthread_mutex_lock(philo->l_fork);
	if (ft_check_death(philo))
		return ;
	ft_print(philo, "has taken a fork");
	philo->total_meals++;
	ft_print(philo, "is eating");
	ft_wait(philo, philo->time_eat);
	pthread_mutex_lock(philo->death);
	philo->last_meal = ft_get_time();
	pthread_mutex_unlock(philo->death);
}
