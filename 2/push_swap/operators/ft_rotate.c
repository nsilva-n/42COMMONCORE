/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:06:48 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/01/10 15:01:38 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_rotate(t_stack **stack)
{
	t_stack	*temp;

	if (!*stack || !(*stack)->next)
		return (0);
	temp = *stack;
	*stack = ft_stack_last(*stack);
	(*stack)->next = temp;
	*stack = temp->next;
	temp->next = NULL;
	return (1);
}

void	ft_ra(t_stack **stack)
{
	if (ft_rotate(stack))
		ft_putstr_fd("ra\n", 1);
}

void	ft_rb(t_stack **stack)
{
	if (ft_rotate(stack))
		ft_putstr_fd("rb\n", 1);
}

void	ft_rr(t_stack **a_stack, t_stack **b_stack)
{
	if (ft_rotate(a_stack) && ft_rotate(b_stack))
		ft_putstr_fd("rr\n", 1);
}
