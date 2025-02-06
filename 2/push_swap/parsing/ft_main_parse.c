/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main_parse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 13:41:57 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/02/06 14:32:25 by nsilva-n         ###   ########.fr       */
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
			if (!ft_ver_chars(av[i]))
				ft_exit(NULL, 3);
			if (ft_strchr(av[i], 39))
				ft_exit(NULL, 4);
			ft_stack_addback(&a_stack, ft_stack_new(ft_atoi(av[i])));
		}
		if (!a_stack)
			ft_exit(NULL, 5);
	}
	return (a_stack);
}
