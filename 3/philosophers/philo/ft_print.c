/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:34:39 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/03/13 14:13:40 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ft_print(t_philo *philo, char *str)
{
	pthread_mutex_lock(philo->death);
	if (!*philo->c_death)
	{
		printf("%lld %d %s\n", (ft_get_time() - philo->s_time), philo->id + 1,
			str);
		if (str[0] == 100)
			*philo->c_death = 1;
	}
	pthread_mutex_unlock(philo->death);
	ft_check_death(philo);
}
