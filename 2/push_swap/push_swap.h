/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:55:32 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/01/10 15:08:33 by nsilva-n         ###   ########.fr       */
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

void	ft_exit(t_stack **stack, int errnumb);

// ERROR

char	*ft_error_index(int errnumb);
char	*ft_error_list(int errnumb);

// OPERATORS

int		ft_push(t_stack **src, t_stack **dest);
void	ft_pa(t_stack **src, t_stack **dest);
void	ft_pb(t_stack **src, t_stack **dest);

// PARSING

t_stack	*ft_main_parse(int ac, char **av);
int		ft_parse_atoi(const char *str, t_stack **a_stack);

// STACK

void	ft_stack_addback(t_stack **stack, t_stack *new_stack);
void	ft_stack_free(t_stack **stack);
t_stack	*ft_stack_last(t_stack *stack);
t_stack	*ft_stack_new(int content);
size_t	ft_stack_size(t_stack *stack);

// VERIFIERS
int		ft_ver_posnegs(char *str);
int		ft_ver_repeated(t_stack *stack);
int		ft_ver_sorted(t_stack *a_stack);

#endif