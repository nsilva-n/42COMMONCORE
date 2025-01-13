/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main_parse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 13:41:57 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/01/10 13:38:14 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_main_parse(int ac, char **av)
{
	t_stack	*a_stack;
	int		i;
	int		j;

	i = 0;
	a_stack = NULL;
	while (++i < ac)
	{
		if (ft_ver_posnegs(av[i]))
			ft_exit(NULL, 3);
		if (ft_strchr(av[i], 39))
			ft_exit(NULL, 4);
		j = ft_parse_atoi(av[i], a_stack);
		ft_stack_addback(a_stack, ft_stack_new(j));
	}
	if (!a_stack)
		ft_exit(NULL, 5);
	return (a_stack);
}
