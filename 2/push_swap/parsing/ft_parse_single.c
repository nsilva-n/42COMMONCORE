/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_single.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:23:29 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/02/10 16:37:10 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_parse_single(char **av)
{
	t_stack		*a_stack;
	char		**temp;
	long int	i;

	a_stack = NULL;
	temp = ft_split(av[1], 32);
	i = -1;
	if (!temp)
		return (NULL);
	while (temp[++i])
		if (!ft_ver_chars(temp[i]) || !ft_ver_minplus(temp[i]))
			break ;
	if (!temp[i])
		ft_parse_stack(temp, &a_stack);
	i = -1;
	while (temp[++i])
		free(temp[i]);
	free(temp);
	return (a_stack);
}
