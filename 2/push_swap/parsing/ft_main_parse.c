/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main_parse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 13:41:57 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/02/10 15:02:01 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_main_parse(int ac, char **av)
{
	t_stack	*a_stack;
	int		i;

	i = 0;
	a_stack = NULL;
	if (ac == 2)
		a_stack = ft_parse_single(av);
	else
	{
		while (++i < ac)
		{
			if (!ft_ver_minplus(av[i]) || !ft_ver_quotes(av[i]))
				ft_exit(&a_stack, 3);
			ft_stack_addback(&a_stack,
				ft_stack_new(ft_parse_atoi_ps(av[i], a_stack)));
		}
	}
	if (!a_stack)
		ft_exit(NULL, 5);
	return (a_stack);
}
