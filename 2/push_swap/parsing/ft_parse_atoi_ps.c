/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_atoi_ps.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:18:21 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/02/10 14:54:02 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_parse_atoi_ps(const char *str, t_stack *a_stack)
{
	int				posneg;
	long long int	i;

	i = 0;
	posneg = 1;
	if (*str == '-')
	{
		posneg = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	if (*str == '\0')
		ft_exit(&a_stack, 2);
	while (*str)
	{
		if (!ft_isdigit(*str))
			ft_exit(&a_stack, 2);
		i = i * 10 + (*str - 48);
		str++;
		if ((posneg * i) > INT_MAX || (posneg * i) < INT_MIN)
			ft_exit(&a_stack, 2);
	}
	return (posneg * i);
}
