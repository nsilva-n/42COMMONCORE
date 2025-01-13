/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 11:35:19 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/01/10 13:07:13 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit(t_stack **stack, int errnumb)
{
	if (stack)
		ft_stack_free(stack);
	if (errnumb)
		ft_printf_fd(2, "%s\n", ft_error_index(errnumb));
	else
		exit(EXIT_SUCCESS);
	exit(EXIT_FAILURE);
}
