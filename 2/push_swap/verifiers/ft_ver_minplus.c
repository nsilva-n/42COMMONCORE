/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ver_minplus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:21:27 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/02/10 14:55:55 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_ver_minplus(char *str)
{
	int	i;
	int	minplus;

	i = -1;
	minplus = 0;
	while (str[++i])
	{
		if ((str[i] == 43 || str[i] == 45) && minplus)
			return (0);
		else if (str[i] == 43 || str[i] == 45)
			minplus = 1;
	}
	return (1);
}
