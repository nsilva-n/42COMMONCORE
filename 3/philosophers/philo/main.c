/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:44:23 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/03/13 14:51:42 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int ac, char **av)
{
	t_philo			*philo;
	pthread_mutex_t	*forks;
	pthread_mutex_t	*death;

	if (!ft_check_args(ac, av))
		ft_exit(NULL, NULL, NULL, 1);
	philo = malloc(sizeof(t_philo) * ft_atoll(av[1]));
	forks = malloc(sizeof(pthread_mutex_t) * ft_atoll(av[1]));
	death = malloc(sizeof(pthread_mutex_t));
	if (!philo || !forks || !death)
		ft_exit(philo, forks, death, 1);
	if (!ft_parse_args(av, philo))
		ft_exit(philo, forks, death, 1);
	ft_init(philo, forks, death);
	ft_create_threads(philo);
	ft_exit(philo, forks, death, 0);
	return (0);
}
