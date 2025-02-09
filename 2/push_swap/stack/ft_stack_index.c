/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_index.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:10:44 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/02/09 18:22:01 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_stack_index(t_stack *stack, int number)
{
	int	i;

	i = 0;
	while (stack->number != number)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}
