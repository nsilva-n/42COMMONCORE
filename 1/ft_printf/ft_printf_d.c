/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:34:33 by nsilva-n          #+#    #+#             */
/*   Updated: 2024/11/20 17:47:26 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_put_d(int n)
{
	if (n == -2147483648)
	{
		ft_printf_c('-');
		ft_printf_c('2');
		ft_put_d(147483648);
	}
	else if (n < 0)
	{
		ft_printf_c('-');
		ft_put_d(-n);
	}
	else if (n > 9)
	{
		ft_put_d(n / 10);
		ft_put_d(n % 10);
	}
	else
		ft_printf_c(n + '0');
}

int	ft_printf_d(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len++;
	ft_put_d(n);
	if (n == 0)
		return (1);
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}
