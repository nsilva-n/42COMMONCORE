/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_atoi.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 12:27:26 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/01/10 15:02:59 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_parse_atoi(const char *str, t_stack **a_stack)
{
	int			posneg;
	int			i;
	long int	res;

	i = -1;
	res = 0;
	posneg = 1;
	if (str[++i] == '-')
		posneg *= -1;
	if (!str[i])
		ft_exit(a_stack, 6);
	while (str[++i])
	{
		if (!ft_isdigit(str[i]))
			ft_exit(a_stack, 7);
		res = res * 10 + (str[i] - 48);
		if (res * posneg > INT_MAX || res * posneg < INT_MIN)
			ft_exit(a_stack, 8);
	}
	return (res * posneg);
}
