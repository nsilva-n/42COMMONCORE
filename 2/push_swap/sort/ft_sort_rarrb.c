/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_rarrb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:00:47 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/02/05 14:52:06 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_sort_israrrb(t_stack *src, t_stack *dest, int n, char stack)
{
	int	i;

	i = 0;
	if (stack == 'a')
	{
		if (ft_main_search(src, n, stack))
			i = ft_stack_size(dest) - ft_main_search(src, n, stack);
		return (i + ft_stack_index(dest, n));
	}
	else 
	{
		if (ft_main_search(dest, n, stack))
			i = ft_stack_size(dest) - ft_main_search(dest, n, stack);
		return (i + ft_stack_index(src, n));
	}
}

int	ft_sort_rarrb(t_stack **a_stack, t_stack **b_stack, int n, char stack)
{
	if (stack == 'a')
	{
		while ((*a_stack)->number != n)
			ft_ra(a_stack);
		while (ft_main_search(*b_stack, n, stack) > 0)
			ft_rrb(b_stack);
		ft_pb(a_stack, b_stack);
	}
	else
	{
		while (ft_main_search(*a_stack, n, stack) > 0)
			ft_ra(a_stack);
		while ((*b_stack)->number != n)
			ft_rrb(b_stack);
		ft_pa(a_stack, b_stack);
	}
	return (-1);
}
