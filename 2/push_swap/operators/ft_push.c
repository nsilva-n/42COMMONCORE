/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:05:35 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/02/06 13:26:17 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_push(t_stack **src, t_stack **dest)
{
	t_stack	*temp;

	if (!*dest)
		return (0);
	temp = *src;
	*src = *dest;
	*dest = (*dest)->next;
	(*src)->next = temp;
	return (1);
}

void	ft_pa(t_stack **src, t_stack **dest)
{
	if (ft_push(src, dest))
		ft_putstr_fd("pa\n", 1);
}

void	ft_pb(t_stack **src, t_stack **dest)
{
	if (ft_push(dest, src))
		ft_putstr_fd("pb\n", 1);
}
