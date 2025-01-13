/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ver_posneg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 12:00:34 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/01/10 13:38:01 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_ver_posnegs(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] == '+' || str[i] == '-')
			break ;
	while (str[++i])
		if (str[i] == '+' || str[i] == '-')
			return (1);
	return (0);
}
