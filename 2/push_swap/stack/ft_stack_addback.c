/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_addback.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 13:07:58 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/02/04 13:57:08 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_stack_addback(t_stack **stack, t_stack *new_stack)
{
	if (!new_stack)
		return ;
	if (!stack)
		return ;
	if (!*stack)
		*stack = new_stack;
	else
		(ft_stack_last(*stack))->next = new_stack;
}
