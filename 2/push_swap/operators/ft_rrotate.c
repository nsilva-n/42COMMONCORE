/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:09:32 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/02/07 12:43:32 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_rrotate(t_stack **stack)
{
	t_stack	*temp;
	int		i;

	if (!*stack || !(*stack)->next)
		return (0);
	i = 0;
	temp = *stack;
	while ((*stack)->next && ++i >= 0)
		*stack = (*stack)->next;
	(*stack)->next = temp;
	while (--i > 0)
		temp = temp->next;
	temp->next = NULL;
	return (1);
}

void	ft_rra(t_stack **stack)
{
	if (ft_rrotate(stack))
		ft_putstr_fd("rra\n", 1);
}

void	ft_rrb(t_stack **stack)
{
	if (ft_rrotate(stack))
		ft_putstr_fd("rrb\n", 1);
}

void	ft_rrr(t_stack **a_stack, t_stack **b_stack)
{
	if (ft_rrotate(a_stack) && ft_rrotate(b_stack))
		ft_putstr_fd("rrr\n", 1);
}
