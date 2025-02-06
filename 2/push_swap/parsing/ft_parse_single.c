/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_single.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:23:29 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/02/05 13:01:33 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_parse_single(char **av)
{
	t_stack		*a_stack;
	char		**temp;
	long int	i;

	a_stack = NULL;
	temp = ft_split(av[1], ' ');
	i = -1;
	if (!temp)
		return (NULL);
	ft_parse_stack(temp, &a_stack);
	while (temp[++i])
		free(temp[i]);
	free(temp);
	return (a_stack);
}
