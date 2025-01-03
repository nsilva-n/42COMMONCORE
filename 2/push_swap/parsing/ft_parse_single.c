/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_single.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 13:51:52 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/01/03 14:02:03 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_parse_single(char *str)
{
	char	**a_split;
	int		i;
	t_stack	*a_stack;

	a_split = ft_split(str, ' ');
	i = -1;
	if (!a_split)
		return (NULL);
	while (a_split[++i])
		a_stack = ft_stack_addback(a_stack, ft_stack_new(ft_atoi(a_split[i])));
	return (a_stack);
}
