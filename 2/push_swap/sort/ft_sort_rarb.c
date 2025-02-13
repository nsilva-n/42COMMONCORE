/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_rarb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:33:51 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/02/10 13:45:03 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_sort_israrb(t_stack *src, t_stack *dest, int n, char stack)
{
	int	i;

	if (stack == 'a')
	{
		i = ft_main_search(dest, n, 'b');
		if (i < ft_stack_index(src, n))
			return (ft_stack_index(src, n));
		return (i);
	}
	else
	{
		i = ft_main_search(src, n, 'a');
		if (i < ft_stack_index(dest, n))
			return (ft_stack_index(dest, n));
		return (i);
	}
}

int	ft_sort_rarb(t_stack **a_stack, t_stack **b_stack, int n, char stack)
{
	if (stack == 'a')
	{
		while ((*a_stack)->number != n && ft_main_search(*b_stack, n, 'b') > 0)
			ft_rr(a_stack, b_stack);
		while ((*a_stack)->number != n)
			ft_ra(a_stack);
		while (ft_main_search(*b_stack, n, 'b') > 0)
			ft_rb(b_stack);
		ft_pb(a_stack, b_stack);
	}
	else
	{
		while ((*b_stack)->number != n && ft_main_search(*a_stack, n, 'a') > 0)
			ft_rr(a_stack, b_stack);
		while ((*b_stack)->number != n)
			ft_rb(b_stack);
		while (ft_main_search(*a_stack, n, 'a') > 0)
			ft_ra(a_stack);
		ft_pa(a_stack, b_stack);
	}
	return (-1);
}
