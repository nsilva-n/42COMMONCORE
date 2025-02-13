/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_b_to_three.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:43:35 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/02/10 13:47:43 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_b_to_three(t_stack **a, t_stack **b)
{
	int		i;
	t_stack	*temp;

	i = 0;
	while (ft_stack_size(*a) > 3 && !ft_ver_sorted(*a))
	{
		temp = *a;
		i = ft_sort_rotate(*a, *b, 'a');
		while (i >= 0)
		{
			if (i == ft_sort_israrb(*a, *b, temp->number, 'a'))
				i = ft_sort_rarb(a, b, temp->number, 'a');
			else if (i == ft_sort_isrrarrb(*a, *b, temp->number, 'a'))
				i = ft_sort_rrarrb(a, b, temp->number, 'a');
			else if (i == ft_sort_israrrb(*a, *b, temp->number, 'a'))
				i = ft_sort_rarrb(a, b, temp->number, 'a');
			else if (i == ft_sort_isrrarb(*a, *b, temp->number, 'a'))
				i = ft_sort_rrarb(a, b, temp->number, 'a');
			else
				temp = temp->next;
		}
	}
}
