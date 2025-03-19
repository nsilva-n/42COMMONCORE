/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:46:02 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/03/18 13:16:01 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <strings.h>
# include <stdarg.h>
# include <fcntl.h>
# include <math.h>
# include <pthread.h>
# include <sys/time.h>

typedef struct s_philo
{
	int				*c_death;
	int				id;
	long long int	n_meals;
	long long int	n_philo;
	long long int	total_meals;
	pthread_t		thread;
	long long int	s_time;
	long long int	time_die;
	long long int	time_eat;
	long long int	last_meal;
	long long int	time_sleep;
	pthread_mutex_t	*death;
	pthread_mutex_t	*l_fork;
	pthread_mutex_t	*r_fork;
}					t_philo;

void			ft_print(t_philo *philo, char *str);
void			ft_philo_eat(t_philo *philo);
void			ft_philo_sleep(t_philo *philo);
void			ft_philo_think(t_philo *philo);
void			ft_wait(t_philo *philo, size_t wait);
int				ft_check_death(t_philo *philo);
void			*ft_philo_check(void *args);
void			ft_create_threads(t_philo *philo);
int				ft_parse_args(char **av, t_philo *philo);
int				ft_isdigit(int c);
long long int	ft_get_time(void);
long long int	ft_atoll(const char *nptr);
int				ft_check_args(int ac, char **av);
void			ft_init(t_philo *philo, pthread_mutex_t *forks,
					pthread_mutex_t *death);
void			ft_exit(t_philo *philo, pthread_mutex_t *f,
					pthread_mutex_t *d, int e);

#endif