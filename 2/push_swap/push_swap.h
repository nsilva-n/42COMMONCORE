/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:55:32 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/02/10 14:51:14 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "lib/libft/libft.h"

typedef struct s_stack
{
	int				number;
	int				index;
	struct s_stack	*next;
}					t_stack;

void	ft_exit(t_stack **stack, int errnumb);

// OPERATORS

int		ft_push(t_stack **src, t_stack **dest);
void	ft_pa(t_stack **src, t_stack **dest);
void	ft_pb(t_stack **src, t_stack **dest);
int		ft_rotate(t_stack **stack);
void	ft_ra(t_stack **stack);
void	ft_rb(t_stack **stack);
void	ft_rr(t_stack **a_stack, t_stack **b_stack);
int		ft_rrotate(t_stack **stack);
void	ft_rra(t_stack **stack);
void	ft_rrb(t_stack **stack);
void	ft_rrr(t_stack **a_stack, t_stack **b_stack);
int		ft_swap(t_stack **stack);
void	ft_sa(t_stack **stack);
void	ft_sb(t_stack **stack);
void	ft_ss(t_stack **a_stack, t_stack **b_stack);

// PARSING

t_stack	*ft_main_parse(int ac, char **av);
int		ft_parse_atoi_ps(const char *str, t_stack *a_stack);
t_stack	*ft_parse_single(char **av);
void	ft_parse_stack(char **av, t_stack **a_stack);

// SEARCH

int		ft_main_search(t_stack *stack, int n, char s);
int		ft_search_loop(t_stack *stack, int n, char s);

// SORT

void	ft_main_sort(t_stack **a_stack);
void	ft_sort_three(t_stack **stack);
t_stack	**ft_sort_a(t_stack **a_stack, t_stack **b_stack);
void	ft_sort_b_to_three(t_stack **a_stack, t_stack **b_stack);
t_stack	*ft_sort_b(t_stack **a_stack);
int		ft_sort_israrb(t_stack *src, t_stack *dest, int n, char stack);
int		ft_sort_rarb(t_stack **a_stack, t_stack **b_stack, int n, char stack);
int		ft_sort_israrrb(t_stack *src, t_stack *dest, int n, char stack);
int		ft_sort_rarrb(t_stack **a_stack, t_stack **b_stack, int n, char stack);
int		ft_sort_isrrarb(t_stack *src, t_stack *dest, int n, char stack);
int		ft_sort_rrarb(t_stack **a_stack, t_stack **b_stack, int n, char stack);
int		ft_sort_isrrarrb(t_stack *src, t_stack *dest, int n, char stack);
int		ft_sort_rrarrb(t_stack **a_stack, t_stack **b_stack, int n, char stack);
int		ft_sort_rotate(t_stack *a_stack, t_stack *b_stack, char stack);

// STACK

void	ft_stack_addback(t_stack **stack, t_stack *new_stack);
void	ft_stack_free(t_stack **stack);
int		ft_stack_index(t_stack *a_stack, int number);
t_stack	*ft_stack_last(t_stack *stack);
int		ft_stack_max(t_stack *stack);
int		ft_stack_min(t_stack *stack);
t_stack	*ft_stack_new(int content);
int		ft_stack_size(t_stack *stack);

// VERIFIERS
int		ft_ver_chars(char *str);
int		ft_ver_minplus(char *str);
int		ft_ver_quotes(char *str);
int		ft_ver_repeated(t_stack *stack);
int		ft_ver_sorted(t_stack *a_stack);

#endif