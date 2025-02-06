/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:30:32 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/02/04 14:15:00 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_parse_stack(char **av, t_stack **a_stack)
{
	int	i;

	i = 0;
	while (av[++i])
		ft_stack_addback(a_stack, ft_stack_new(ft_atoi(av[i])));
}
