/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main_search.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:52:57 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/02/10 13:43:12 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_main_search(t_stack *stack, int n, char s)
{
	if ((s == 'a' && n < stack->number && n > ft_stack_last(stack)->number)
		|| (s == 'b' && n > stack->number && n < ft_stack_last(stack)->number))
		return (0);
	if (s == 'a' && (n > ft_stack_max(stack) || n < ft_stack_min(stack)))
		return (ft_stack_index(stack, ft_stack_min(stack)));
	else if (s == 'b' && (n > ft_stack_max(stack) || n < ft_stack_min(stack)))
		return (ft_stack_index(stack, ft_stack_max(stack)));
	else
		return (ft_search_loop(stack, n, s));
}
