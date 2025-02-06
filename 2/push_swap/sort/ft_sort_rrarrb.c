/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_rrarrb.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 18:30:09 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/01/18 18:30:09 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_sort_isrrarrb(t_stack *src, t_stack *dest, int n, char stack)
{
	int	i;

	i = 0;
	if (stack == 'a')
	{
		if (ft_main_search(src, n, stack))
			i = ft_stack_size(src) - ft_main_search(src, n, stack);
		if (i < ft_stack_size(dest) - ft_stack_index(dest, n)
			&& ft_stack_index(dest, n))
			i = ft_stack_size(dest) - ft_stack_index(dest, n);
	}
	else
	{
		if (ft_main_search(dest, n, stack))
			i = ft_stack_size(dest) - ft_main_search(dest, n, stack);
		if (i < ft_stack_size(src) - ft_stack_index(src, n)
			&& ft_stack_index(src, n))
			i = ft_stack_size(src) - ft_stack_index(src, n);
	}
	return (i);
}

int	ft_sort_rrarrb(t_stack **a_stack, t_stack **b_stack, int n, char stack)
{
	if (stack == 'a')
	{
		while ((*a_stack)->number != n && ft_main_search(*b_stack, n, 'b') > 0)
			ft_rrr(a_stack, b_stack);
		while ((*a_stack)->number != n)
			ft_rra(a_stack);
		while (ft_main_search(*b_stack, n, 'b') > 0)
			ft_rrb(b_stack);
		ft_pb(a_stack, b_stack);
	}
	else
	{
		while ((*b_stack)->number != n && ft_main_search(*a_stack, n, 'a') > 0)
			ft_rrr(a_stack, b_stack);
		while ((*b_stack)->number != n)
			ft_rrb(b_stack);
		while (ft_main_search(*a_stack, n, 'a') > 0)
			ft_rra(a_stack);
		ft_pa(a_stack, b_stack);
	}
	return (0);
}
