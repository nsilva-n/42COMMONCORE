/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 13:49:43 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/02/10 13:43:54 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_sort_b(t_stack **a_stack)
{
	t_stack	*b_stack;

	b_stack = NULL;
	if (ft_stack_size(*a_stack) > 3 && !ft_ver_sorted(*a_stack))
		ft_pb(a_stack, &b_stack);
	if (ft_stack_size(*a_stack) > 3 && !ft_ver_sorted(*a_stack))
		ft_pb(a_stack, &b_stack);
	if (ft_stack_size(*a_stack) > 3 && !ft_ver_sorted(*a_stack))
		ft_sort_b_to_three(a_stack, &b_stack);
	if (!ft_ver_sorted(*a_stack))
		ft_sort_three(a_stack);
	return (b_stack);
}
