/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:45:10 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/03/14 13:36:32 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ft_exit(t_philo *philo, pthread_mutex_t *f, pthread_mutex_t *d, int e)
{
	int	i;

	i = -1;
	if (philo)
	{
		while (++i < philo->n_philo)
			pthread_join(philo[i].thread, NULL);
		while (--i >= 0)
			pthread_mutex_destroy(philo[i].l_fork);
		if (philo->death)
			pthread_mutex_destroy(philo->death);
		free(philo->c_death);
		free(philo);
	}
	if (f)
		free(f);
	if (d)
		free(d);
	if (e)
		exit((printf("Error\n") * 0) + EXIT_FAILURE);
	exit(EXIT_SUCCESS);
}
