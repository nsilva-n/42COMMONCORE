/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:34:24 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/02/07 11:39:13 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_sort_rotate(t_stack *src, t_stack *dest, char stack)
{
	int		i;
	t_stack	*temp;

	if (stack == 'a')
		temp = src;
	if (stack == 'a')
		i = ft_sort_isrrarrb(src, dest, src->number, 'a');
	if (stack == 'b')
		temp = dest;
	if (stack == 'b')
		i = ft_sort_isrrarrb(src, dest, dest->number, 'b');
	while (temp)
	{
		if (i > ft_sort_israrb(src, dest, temp->number, stack))
			i = ft_sort_israrb(src, dest, temp->number, stack);
		if (i > ft_sort_isrrarrb(src, dest, temp->number, stack))
			i = ft_sort_isrrarrb(src, dest, temp->number, stack);
		if (i > ft_sort_israrrb(src, dest, temp->number, stack))
			i = ft_sort_israrrb(src, dest, temp->number, stack);
		if (i > ft_sort_isrrarb(src, dest, temp->number, stack))
			i = ft_sort_isrrarb(src, dest, temp->number, stack);
		temp = temp->next;
	}
	return (i);
}
