/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:18:00 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/02/05 15:02:30 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	**ft_sort_a(t_stack **a_stack, t_stack **b_stack)
{
	int		i;
	t_stack	*temp;

	while (*b_stack)
	{
		temp = *b_stack;
		i = ft_sort_rotate(*a_stack, *b_stack, 'a');
		while (i >= 0)
		{
			if (i == ft_sort_israrb(*a_stack, *b_stack, temp->number, 'a'))
				i = ft_sort_rarb(a_stack, b_stack, temp->number, 'a');
			else if (i == ft_sort_israrrb(*a_stack, *b_stack, temp->number, 'a'))
				i = ft_sort_rarrb(a_stack, b_stack, temp->number, 'a');
			else if (i == ft_sort_isrrarrb(*a_stack, *b_stack, temp->number, 'a'))
				i = ft_sort_rrarrb(a_stack, b_stack, temp->number, 'a');
			else if (i == ft_sort_isrrarb(*a_stack, *b_stack, temp->number, 'a'))
				i = ft_sort_rrarb(a_stack, b_stack, temp->number, 'a');
			else
				temp = temp->next;
		}
	}
	return (a_stack);
}
