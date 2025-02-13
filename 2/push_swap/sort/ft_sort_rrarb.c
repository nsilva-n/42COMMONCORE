/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_rarrb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 11:26:48 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/01/22 11:26:48 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_sort_isrrarb(t_stack *src, t_stack *dest, int n, char stack)
{
	int	i;

	i = 0;
	if (stack == 'a')
	{
		if (ft_stack_index(src, n))
			i = ft_stack_size(src) - ft_stack_index(src, n);
		i = ft_main_search(dest, n, 'b') + i;
		return (i);
	}
	else
	{
		if (ft_main_search(src, n, 'a'))
			i = ft_stack_size(src) - ft_main_search(src, n, 'a');
		i = ft_stack_index(dest, n) + i;
		return (i);
	}
}

int	ft_sort_rrarb(t_stack **a_stack, t_stack **b_stack, int n, char stack)
{
	if (stack == 'a')
	{
		while ((*a_stack)->number != n)
			ft_rra(a_stack);
		while (ft_main_search(*b_stack, n, 'b') > 0)
			ft_rb(b_stack);
		ft_pb(a_stack, b_stack);
	}
	else
	{
		while (ft_main_search(*a_stack, n, 'a') > 0)
			ft_rra(a_stack);
		while (*b_stack)
			ft_rb(b_stack);
		ft_pa(a_stack, b_stack);
	}
	return (-1);
}
