/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_min.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 11:24:27 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/01/18 11:24:27 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_stack_min(t_stack *stack)
{
	int	min;

	min = stack->number;
	while (stack)
	{
		if (stack->number < min)
			min = stack->number;
		stack = stack->next;
	}
	return (min);
}
