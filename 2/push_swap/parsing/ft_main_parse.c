/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main_parse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 13:41:57 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/01/03 13:55:56 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_main_parse(int ac, char **av)
{
	t_stack	*a_stack;

	if (ac == 2)
		a_stack = ft_parse_single(ac, av[1]);
	else
		a_stack = ft_parse_multiple(ac, av);
}

int	handle_both_cases(int *argc, char ***argv)
{
	int		i;
	char	**split_argv;

	if (*argc == 2)
	{
		split_argv = ft_split((*argv)[1], ' ');
		i = 0;
		while (split_argv[i])
			i++;
		*argc = i;
		*argv = split_argv;
		return (1);
	}
	else
	{
		*argv = *argv + 1;
		*argc = *argc - 1;
		return (2);
	}
}

t_numbers	*parse_args(int argc, char **argv)
{
	int			i;
	int			number;
	t_numbers	*numbers;
	int			mode;

	mode = handle_both_cases(&argc, &argv);
	i = 0;
	numbers = NULL;
	while (i < argc)
		ft_strtoi(argv[i++]);
	i = 0;
	while (i < argc)
	{
		number = ft_strtoi(argv[i]);
		if (mode == 1)
			free(argv[i]);
		i++;
		if (numbers && numbers_find(numbers, number))
			panic(9);
		numbers_append(&numbers, numbers_new(number));
	}
	if (mode == 1)
		free(argv);
	return (numbers);
}