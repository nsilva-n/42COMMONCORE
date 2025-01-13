/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:52:45 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/01/10 15:01:02 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a_stack;

	a_stack = NULL;
	if (ac < 2)
		ft_exit(NULL, 1);
	a_stack = ft_main_parse(ac, av);
	if (ft_ver_dup(a_stack))
		ft_exit(a_stack, 2);
	if (!ft_ver_sorted(a_stack))
		ft_main_sort(&a_stack);
	ft_exit(&a_stack, 0);
	return (0);
}
