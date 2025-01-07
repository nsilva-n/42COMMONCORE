/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:20:17 by afpachec          #+#    #+#             */
/*   Updated: 2024/11/21 22:12:13 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(char *s)
{
	size_t	count;

	count = 0;
	if (!s)
		panic(4);
	while (s[count])
		count++;
	return (count);
}

int	ft_strtoi(char *str)
{
	int		sign;
	long	num;

	if (!str)
		panic(6);
	sign = 1;
	num = 0;
	if ((*str == '-' || *str == '+') && *str++ == '-')
		sign = -1;
	if (!*str)
		panic(25);
	while (*str >= '0' && *str <= '9')
	{
		num = (num * 10) + ((*str++ - '0'));
		if ((num * sign) > 2147483647 || (num * sign) < -2147483648)
			panic(3);
	}
	if (*str)
		panic(10);
	return (num * sign);
}
