/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 14:02:10 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/02/07 13:20:16 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_three(t_stack **stack)
{
	if (ft_stack_min(*stack) == (*stack)->number)
	{
		ft_rra(stack);
		ft_sa(stack);
	}
	else if (ft_stack_max(*stack) == (*stack)->number)
	{
		ft_ra(stack);
		if (!ft_ver_sorted(*stack))
			ft_sa(stack);
	}
	else
	{
		if (ft_stack_index(*stack, ft_stack_max(*stack)) == 1)
			ft_rra(stack);
		else
			ft_sa(stack);
	}
}
