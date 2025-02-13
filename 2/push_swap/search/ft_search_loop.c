/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_loop.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:43:01 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/02/10 13:48:04 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_search_loop(t_stack *stack, int n, char s)
{
	int		i;
	t_stack	*temp;

	i = 1;
	temp = stack->next;
	if (s == 'a')
	{
		while (temp && (stack->number > n || temp->number < n))
		{
			stack = stack->next;
			temp = stack->next;
			i++;
		}
	}
	else
	{
		while (temp && (stack->number < n || temp->number > n))
		{
			stack = stack->next;
			temp = stack->next;
			i++;
		}
	}
	return (i);
}
