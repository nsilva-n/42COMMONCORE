/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:45:38 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/03/14 13:33:26 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ft_parse_args(char **av, t_philo *philo)
{
	long long int	i;
	int				*c_dead;

	i = -1;
	c_dead = malloc(sizeof(int));
	if (!c_dead)
		return (0);
	*c_dead = 0;
	while (++i < ft_atoll(av[1]))
	{
		philo[i].id = i;
		philo[i].n_philo = ft_atoll(av[1]);
		philo[i].time_die = ft_atoll(av[2]);
		philo[i].time_eat = ft_atoll(av[3]);
		philo[i].time_sleep = ft_atoll(av[4]);
		philo[i].c_death = c_dead;
		philo[i].s_time = ft_get_time();
		philo[i].last_meal = ft_get_time();
		philo[i].total_meals = 0;
		if (av[5] && ft_atoll(av[5]) >= 0)
			philo[i].n_meals = ft_atoll(av[5]);
		else
			philo[i].n_meals = -1;
	}
	return (1);
}
