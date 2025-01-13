/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_index.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:10:44 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/01/10 15:12:32 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_stack_index(t_stack *a_stack, int number)
{
	int	i;
	
	i = -1;
	while (++i >= 0 && a_stack->number != number)
		a_stack = a_stack->next;
	return (i);
}
