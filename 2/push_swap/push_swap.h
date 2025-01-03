/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:55:32 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/01/03 11:43:51 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "lib/libft/libft.h"

typedef struct s_stack
{
	int				number;
	struct s_stack	*next;
}					t_stack;

void	ft_stacking(int ac, char **av, t_list **a_stack);

#endif