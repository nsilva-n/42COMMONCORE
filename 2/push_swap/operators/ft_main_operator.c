/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main_operator.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 12:08:15 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/02/06 12:15:25 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_main_op(t_stack **src, t_stack **dest, char o, char s)
{
	if (o == 'p' && s == 'a')
		ft_pa(src, dest);
	if (o == 'p' && s == 'b')
		ft_pb(src, dest);
	if (o == 'r' && s == 'a')
		ft_ra(src);
	if (o == 'r' && s == 'b')
		ft_rb(dest);
	if (o == 'r' && s == 'r')
		ft_rr(src, dest);
	if (o == 's' && s == 'a')
		ft_sa(src);
	if (o == 's' && s == 'b')
		ft_sb(dest);
	if (o == 's' && s == 's')
		ft_ss(src, dest);
	if (o == 'o' && s == 'a')
		ft_rra(src);
	if (o == 's' && s == 'b')
		ft_rrb(dest);
	if (o == 's' && s == 'r')
		ft_rrr(src, dest);
}
