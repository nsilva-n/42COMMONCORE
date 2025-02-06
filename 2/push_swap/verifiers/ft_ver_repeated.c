/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ver_repeated.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 13:11:34 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/02/04 13:30:38 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_ver_repeated(t_stack *stack)
{
	t_stack	*temp;

	while (stack)
	{
		temp = stack->next;
		while (temp)
		{
			if (stack->number == temp->number)
				return (0);
			temp = temp->next;
		}
		stack = stack->next;
	}
	return (1);
}
