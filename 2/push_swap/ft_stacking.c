/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacking.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 15:58:42 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/12/22 16:30:26 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stacking(int ac, char **av, t_stack **a_stack)
{
	int		i;

	i = 0;
	while (++i < ac)
	{
		ft_lstadd_back(a_stack, ft_lstnew(ft_atoi(av[i])));
	}
}
