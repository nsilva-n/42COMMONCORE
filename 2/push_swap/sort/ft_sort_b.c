/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 13:49:43 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/01/10 14:34:55 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_b_to_three(t_stack **a_stack, t_stack **b_stack)
{
	int		i;
	t_stack	*temp;

	while (ft_stack_size(*a_stack) > 3 && ft_ver_sorted(*a_stack))
	{
		temp = *a_stack;
		i = ft_sort_rotate(*a_stack, *b_stack);
		while (i)
		{
			if (i == ft_sort_israrb(*a_stack, *b_stack, temp->number))
				i = ft_sort_rarb(a_stack, b_stack, temp->number);
			else if (i == ft_sort_isrrarrb(*a_stack, *b_stack, temp->number))
				i = ft_sort_rrarrb(a_stack, b_stack, temp->number);
			else if (ft_sort_israrrb(*a_stack, *b_stack, temp->number))
				i = ft_sort_rarrb(a_stack, b_stack, temp->number);
			else if (ft_sort_isrrarb(*a_stack, *b_stack, temp->number))
				i = ft_sort_rrarb(a_stack, b_stack, temp->number);
			else
				temp = temp->next;
		}
	}
}

t_stack	*ft_sort_b(t_stack **a_stack)
{
	t_stack	*b_stack;
	int		i;

	i = -1;
	b_stack = NULL;
	while (ft_stack_size(*a_stack) > 3 && !ft_ver_sorted(*a_stack) && ++i < 2)
		ft_pb(a_stack, &b_stack);
	if (ft_stack_size(*a_stack) > 3 && !ft_ver_sorted(*a_stack))
		ft_sort_b_to_three(a_stack, &b_stack);
	if (!ft_ver_sorted(*a_stack))
		ft_sort_three(a_stack);
	return (b_stack);
}
