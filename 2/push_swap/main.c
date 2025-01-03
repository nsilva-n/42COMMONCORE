/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:52:45 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/01/03 13:59:26 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_stack	*a_stack;
	t_stack	*b_stack;

	a_stack = NULL;
	b_stack = NULL;
	if (ac < 2)
		exit(0);
	a_stack = ft_main_parse(ac, av);
	while (a_stack)
	{
		ft_printf("%s\n", a_stack->number);
		a_stack = a_stack->next;
	}
}

// int	main(int ac, char **av)
// {
// 	t_stack	*a_stack;
// 	t_stack	*b_stack;
// 	size_t		size;

// 	a_stack = NULL;
// 	b_stack = NULL;
// 	a_stack = parse_args(argc, argv);
// 	if (!is_numbers_ordered(a_stack))
// 	{
// 		size = numbers_size(a_stack);
// 		if (size < 3)
// 			sa(&a_stack);
// 		else if (size < 4)
// 			three_sort(&a_stack);
// 		else if (size < 6)
// 			four_five_sort(&a_stack, &b_stack);
// 		else
// 			radix_sort(&a_stack, &b_stack);
// 	}
// 	delete_all_numbers(a_stack);
// }
// int	handle_both_cases(int *argc, char ***argv)
// {
// 	int		i;
// 	char	**split_argv;

// 	if (*argc == 2)
// 	{
// 		split_argv = ft_split((*argv)[1], ' ');
// 		i = 0;
// 		while (split_argv[i])
// 			i++;
// 		*argc = i;
// 		*argv = split_argv;
// 		return (1);
// 	}
// 	else
// 	{
// 		*argv = *argv + 1;
// 		*argc = *argc - 1;
// 		return (2);
// 	}
// }

// t_numbers	*parse_args(int argc, char **argv)
// {
// 	int			i;
// 	int			number;
// 	t_numbers	*numbers;
// 	int			mode;

// 	mode = handle_both_cases(&argc, &argv);
// 	i = 0;
// 	numbers = NULL;
// 	while (i < argc)
// 		ft_strtoi(argv[i++]);
// 	i = 0;
// 	while (i < argc)
// 	{
// 		number = ft_strtoi(argv[i]);
// 		if (mode == 1)
// 			free(argv[i]);
// 		i++;
// 		if (numbers && numbers_find(numbers, number))
// 			panic(9);
// 		numbers_append(&numbers, numbers_new(number));
// 	}
// 	if (mode == 1)
// 		free(argv);
// 	return (numbers);
// }