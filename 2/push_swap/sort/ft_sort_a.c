/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:18:00 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/02/10 13:46:26 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	**ft_sort_a(t_stack **a, t_stack **b)
{
	int		i;
	t_stack	*temp;

	while (*b)
	{
		temp = *b;
		i = ft_sort_rotate(*a, *b, 'b');
		while (i >= 0)
		{
			if (i == ft_sort_israrb(*a, *b, temp->number, 'b'))
				i = ft_sort_rarb(a, b, temp->number, 'b');
			else if (i == ft_sort_israrrb(*a, *b, temp->number, 'b'))
				i = ft_sort_rarrb(a, b, temp->number, 'b');
			else if (i == ft_sort_isrrarrb(*a, *b, temp->number, 'b'))
				i = ft_sort_rrarrb(a, b, temp->number, 'b');
			else if (i == ft_sort_isrrarb(*a, *b, temp->number, 'b'))
				i = ft_sort_rrarb(a, b, temp->number, 'b');
			else
				temp = temp->next;
		}
	}
	return (a);
}
