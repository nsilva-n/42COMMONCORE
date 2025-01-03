/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_addback.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 13:07:58 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/01/03 13:10:09 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_stack_addback(t_stack **stack, t_stack *new_stack)
{
	t_stack	*temp_stack;

	if (!new_stack)
		return ;
	if (!*stack)
	{
		*stack = new_stack;
		return ;
	}
	temp_stack = ft_stack_last(*stack);
	temp_stack->next = new_stack;
}
