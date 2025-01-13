/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:09:53 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/01/10 13:53:24 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_swap(t_stack **stack)
{
	t_stack	*temp;

	if (!*stack || !((*stack)->next))
		return (0);
	temp = *stack;
	*stack = (*stack)->next;
	temp->next = (*stack)->next;
	(*stack)->next = temp;
	return (1);
}

void	ft_sa(t_stack **stack)
{
	if (ft_swap(stack))
		ft_putstr_fd("sa\n", 1);
}

void	ft_sb(t_stack **stack)
{
	if (ft_swap(stack))
		ft_putstr_fd("sb\n", 1);
}

void	ft_ss(t_stack **a_stack, t_stack **b_stack)
{
	if (ft_swap(a_stack) && ft_swap(b_stack))
		ft_putstr_fd("ss\n", 1);
}
