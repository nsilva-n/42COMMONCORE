/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 13:37:33 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/02/10 14:07:29 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_main_sort(t_stack **a_stack)
{
	t_stack	*b_stack;
	int		i;

	b_stack = NULL;
	if (ft_stack_size(*a_stack) == 2)
		ft_sa(a_stack);
	else
	{
		b_stack = ft_sort_b(a_stack);
		a_stack = ft_sort_a(a_stack, &b_stack);
		i = ft_stack_index(*a_stack, ft_stack_min(*a_stack));
		if (i < ft_stack_size(*a_stack) - i)
			while ((*a_stack)->number != ft_stack_min(*a_stack))
				ft_ra(a_stack);
		else
			while ((*a_stack)->number != ft_stack_min(*a_stack))
				ft_rra(a_stack);
	}
}
